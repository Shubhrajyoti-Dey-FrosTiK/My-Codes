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
        ll count=0,num,present,previous=0,min,max;
        cin>>num;
        for(ll j=0;j<num;j++)
        {
            cin>>present;
            if(j>0)
            {
                min=present; max=previous;
                if(previous<present){swap(max,min);}
                if(max>min*2)
                {
                    while(max>min*2)
                    {count++; min*=2; }
                }
                previous=present;
            }
            if(j==0){previous=present;}
        }
        cout<<count<<endl;
    }
    return 0;
}