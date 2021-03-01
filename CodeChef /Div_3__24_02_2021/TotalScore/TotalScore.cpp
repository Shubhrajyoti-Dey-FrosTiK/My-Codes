#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases;
    cin>>TestCases;
    while(TestCases--)
    {
        ll NoOfParticipants,NoOfProblems,DummyVar;
        cin>>NoOfParticipants>>NoOfProblems;
        vector <ll> Points;
        string s;
        while(NoOfProblems--){cin>>DummyVar; Points.push_back(DummyVar);}
        while(NoOfParticipants--)
        {
            ll ResultantPoints=0;
            cin>>s;
            for(ll i=0;i<s.length(); i++)
            {ResultantPoints+=(((int)s[i])-48)*Points[i];}
            cout<<ResultantPoints<<endl;
        }
    }
    return 0;
}