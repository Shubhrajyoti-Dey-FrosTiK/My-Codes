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
        ll NoOfPatients,DummyVar,i=0;
        cin>>NoOfPatients;
        vector <ll> Store1,Store2;
        unordered_map <ll,vector <ll> > index; 
        unordered_map <ll,ll> count;
        while(NoOfPatients--){cin>>DummyVar; Store1.push_back(DummyVar); Store2.push_back(DummyVar);}
        sort(Store2.begin(),Store2.end(),greater<ll>());
        for(i=0;i<Store2.size();i++){index[Store2[i]].push_back(i+1);}
        for(i=0;i<Store1.size(); i++)
        {
            cout<<index[Store1[i]][count[Store1[i]]]<<" "; 
            count[Store1[i]]++;
        }
        cout<<endl;
    }
    return 0;
}