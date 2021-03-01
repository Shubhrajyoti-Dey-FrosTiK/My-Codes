#include<bits/stdc++.h>
int itr=0;
typedef long long int ll;
using namespace std;
void primes(int N, int s[]){
   vector <bool> prime(N+1, false);
   for (int i=2; i<=N; i+=2)
      s[i] = 2;
   for (int i=3; i<=N; i+=2){
      if (prime[i] == false){
         s[i] = i;
         for (int j=i; j*i<=N; j+=2){
            if (prime[i*j] == false){
               prime[i*j] = true;
               s[i*j] = i;
            }
         }
      }
   }
}
void generatePrimeFactors(int N,vector <pair<int,int> > &Store,int p) {
   int s[N+1];
   primes(N, s);
   int prime = s[N];
   int power = 1;
   while (N > 1){
      N /= s[N];
      if (prime == s[N]){
         power++;
         continue;
      }
      Store.push_back(make_pair(prime,power*p));
      prime = s[N];
      power = 1;
   }
}
int main() {
   int k,p;
   cin>>k>>p;
   vector < pair<int,int> > Store;
   vector<int> Result;
   ll Count=0,c,Num=1,s=0;
   generatePrimeFactors(k,Store,p);
    for(int i=0;i<Store.size();i++)
    {
       c=1; Num=0;int j=Store[i].first;
         for(int j=Store[i].first;j<=Store[i].second;j++)
         {
            int res1 = log(j) / log(Store[i].first); 
            double res2 = log(j) / log(Store[i].first);
            if(res1==res2){cout<<res1<<"  "<<res2; c-=res1;  }
         }
         // while(Num<=Store[i].second)
         // {
            
         //    int res1 = log(j) / log(Store[i].first); 
         //    double res2 = log(j) / log(Store[i].first);
         //    if(res1==res2&&res1!=1){cout<<j<< " " ; Num+=res1; cout<<" "<<c<<endl; }
         //    Num++; c++; j++;
            
         // }cout<<Num<<endl;
         cout<<endl<<c<<endl;
         if(c*Store[i].first>s)
         {s=c*Store[i].first;}
    }
    cout<<s;
   return 0;
}