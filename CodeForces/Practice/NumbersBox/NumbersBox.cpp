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
        ll Rows,Columns,sum;
        ll Arr[Rows][Columns];
        cin>>Rows>>Columns;
        vector < pair<ll,ll> > CoordinateStore;
        for(ll j=0;j<Rows;j++)
        {
            for(ll k=0;k<Columns;k++)
            {
                cin>>Arr[i][j];
                sum+=Arr[i][j];
                // cout<<Arr[i][j]<<" ";
                if(Arr[i][j]<(-1)){CoordinateStore.push_back(make_pair(j,k));}
            }
            // cout<<endl;
        }
        if(CoordinateStore.size() == 0||Row*Columns==1){cout<<sum<<endl; continue;}
        
        // cout<<CoordinateStore.size()<<endl;
        // for(ll j=0;j<CoordinateStore.size();j++)
        // {cout<<CoordinateStore[j].first<<" "<<CoordinateStore[j].second<<endl;}
        for(ll j=0;j<CoordinateStore.size();j++)
        {
            ll left=-1,right=-1,top=-1,bottom=-1;
            ll x=CoordinateStore[j].first,y=CoordinateStore.second;
            if(Arr[x][y]<-1)
            {
                if(x==0&&y==0)
                {
                    if
                }
                
            }
        }
    }
    return 0;
}