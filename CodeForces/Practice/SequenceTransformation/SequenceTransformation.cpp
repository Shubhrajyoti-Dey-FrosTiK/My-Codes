#include<bits/stdc++.h>
#include <unordered_map> 
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases;
    cin>>TestCases;
    for(ll i=0;i<TestCases;i++)
    {
        ll NoOfTerms,DummyVar;
        cin>>NoOfTerms;
        unordered_map <ll,ll> FrequencyMap,CountKeeper,LastIndexKeeper;
        unordered_map <ll,ll>::iterator itr;
        for(ll j=0;j<NoOfTerms;j++)
        {
            cin>>DummyVar;
            FrequencyMap[DummyVar]++; 
            
            ll n=CountKeeper[DummyVar];
            if(FrequencyMap[DummyVar]>0)
            {
                if((FrequencyMap[DummyVar]==1&&j==1)||j-LastIndexKeeper[DummyVar]>1)
                {n++;}
            }
            CountKeeper[DummyVar]=n;
            LastIndexKeeper[DummyVar]=j;
            cout<<flush;
            
        }
        for(itr=FrequencyMap.begin();itr!=FrequencyMap.end();itr++)
        {
            if(LastIndexKeeper[itr->first]<NoOfTerms-1){CountKeeper[itr->first]++;}
        }
        int min=CountKeeper.begin()->second;
        for(itr=CountKeeper.begin();itr!=CountKeeper.end();itr++)
        {if(itr->second<min){min=itr->second;}}
        cout<<min<<endl;
    }
    return 0;
}