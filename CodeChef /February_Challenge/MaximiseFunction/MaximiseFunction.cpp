#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll TestCases,NoOfElements;
    cin>>TestCases;
    vector <ll> Store;
    for(ll i=0;i<TestCases;i++)
    {
        cin>>NoOfElements;
        ll DummyVar;
        for(ll j=0;j<NoOfElements;j++)
        {cin>>DummyVar; Store.push_back(DummyVar);}
        sort(Store.begin(),Store.end());
        cout<<2*(Store[Store.size()-1]-Store[0])<<endl;
        Store.clear();
    }
    return 0;
}