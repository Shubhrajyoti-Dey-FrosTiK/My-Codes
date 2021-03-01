#include<bits/stdc++.h>
#include<unordered_map>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases;
    cin>>TestCases;
    while(TestCases--)
    {
        ll NoOfTerms;
        cin>>NoOfTerms;
        vector <ll> Store;
        unordered_map <ll,ll> IndexStore;
        for(ll i=0;i<NoOfTerms;i++)
        {ll n; cin>>n; Store.push_back(n); IndexStore[n]=i;}
        ll max=Store.size();
        while(Store.size()>0)-
        {
            if(IndexStore[max]>Store.size()-1){max--; continue;}
            for(ll i=IndexStore[max];i<Store.size();i++)
            {cout<<Store[i]<<" ";}
            Store.erase(Store.begin()+IndexStore[max],Store.end());
            max--;
        }
        cout<<endl;
    }
    return 0;
}