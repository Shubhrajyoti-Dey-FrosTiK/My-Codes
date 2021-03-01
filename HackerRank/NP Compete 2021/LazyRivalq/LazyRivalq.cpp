#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll Coordinates,DummyVar1,DummyVar2;
    cin>>Coordinates;
    vector <ll> x,y;
    for(ll i=0;i<Coordinates;i++)
    {cin>>DummyVar1>>DummyVar2; x.push_back(DummyVar1); y.push_back(DummyVar2);}
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    ll XMedian,YMedian;
    if(Coordinates%2==1){XMedian=x[(Coordinates)/2]; YMedian=y[(Coordinates)/2];}
    else{XMedian=x[Coordinates/2-1]; YMedian=y[Coordinates/2-1];}
    ll X=0,Y=0;
    for(ll i=0;i<Coordinates;i++)
    {
        if(XMedian>x[i]){X+=XMedian-x[i];}
        else{X+=x[i]-XMedian;}
        if(YMedian>y[i]){Y+=YMedian-y[i];}
        else{Y+=y[i]-YMedian;}
    }
    cout<<X+Y;
    return 0;
}