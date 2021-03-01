#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     long long int n,k;
     cin>>n>>k;
     while(k)
     {
         if(n%10>0){n--;}
         else{n/=10;}
         k--;
     }
     cout<<n;
     return 0;
 }