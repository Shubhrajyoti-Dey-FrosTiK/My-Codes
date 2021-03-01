#include<bits/stdc++.h>
#include<unordered_map>
using namespace std; 
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector <ll> vll;
typedef unordered_map <ll,ll> mll;
typedef unordered_map <ll,string> mls;
typedef unordered_map <string,ll> msl;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases;
    cin>>TestCases;
    while (TestCases--)
    {
        vector <ll> Store;
        ll n=10;
        while(n--)
        {ll m; cin>>m; Store.push_back(m);}
        ll num,flag=1;
        cin>>num;
        for(ll j=9;j>=0;j--)
        {
            if(Store[j]>num){cout<<j+1<<endl; flag=0; break;}
            else if(Store[j]==num){num=0; Store[j]=0;}
            else if(Store[j]<num){num-=Store[j]; Store[j]=0;}
        }
        if(flag)
        cout<<0<<endl;
    }
    return 0;
}