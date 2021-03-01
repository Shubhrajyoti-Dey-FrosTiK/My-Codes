#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll N,Num,p=2;
    cin>>Num;
    int flag=0;
    for(ll i=2;i*i<Num;i++)
    {
        // if(i*i>=Num){flag=0; break;}
         if(Num%(i*i)==0){flag=1; break;}
    }
    if(flag==1){cout<<"Aaj Ka Samosa Teri Taraf se ";}
    else{cout<<"Apna Time Aaega";}
    return 0;
}