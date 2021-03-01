#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll Num,DummyVar;
    cin>>Num;
    ll Sum=0,max=0;
    for(ll i=0;i<Num;i++)
    {cin>>DummyVar; Sum+=DummyVar; if(DummyVar>max){max=DummyVar;}}
    if(Num==1){cout<<Sum; return 0;}
    if(Sum-max<max){Sum+=2*max-Sum;}
    cout<<Sum;
    return 0;
}