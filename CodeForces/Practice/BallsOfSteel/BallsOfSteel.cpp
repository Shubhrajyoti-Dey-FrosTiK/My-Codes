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
        vector <pair <ll,ll> > Coordinates;
        ll x,y,NoOfCoordinates,MaxDist,count=-1;
        cin>>NoOfCoordinates>>MaxDist;
        for(ll j=0;j<NoOfCoordinates;j++)
        {cin>>x>>y; Coordinates.push_back(make_pair(x,y));}
        for(ll j=0;j<NoOfCoordinates;j++)
        {
            for(ll k=0;k<NoOfCoordinates;k++)
            {
                if(j!=k)
                {
                    if(abs(Coordinates[j].first-Coordinates[k].first)+abs(Coordinates[j].second-Coordinates[k].second)<=MaxDist)
                    {
                        count=1;
                    }
                    else{count=-1; break;}
                } 
            }
            if(count==1){ break;}
        }
        cout<<count<<endl;
    }
    return 0;
}