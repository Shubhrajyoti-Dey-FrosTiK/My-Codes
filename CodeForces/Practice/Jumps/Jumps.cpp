#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases;
    cin>>TestCases;
    for(ll i=0;i<TestCases;i++)
    {
        ll Dummy=0,moves=0,x;
        cin>>x;
        while((moves*(moves+1))/2<x)
        {moves++;}
        moves--;
        if((moves*(moves+1))/2 != x){moves++;}
        ll n=(moves*(moves+1))/2;
        if(n==x||n-x>1){cout<<moves;}
        else{cout<<moves+1;}
        cout<<endl;
    }
    return 0;
}