#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll Radius,count=0;
    cin>>Radius;
    for(ll i=-1*Radius;i<=Radius;i++)
    {
        for(ll j=-1*Radius;j<=Radius;j++)
        {if(pow(i,2)+pow(j,2)<=pow(Radius,2)){count++;}}
    }
    cout<<count-1;
    return 0;
}