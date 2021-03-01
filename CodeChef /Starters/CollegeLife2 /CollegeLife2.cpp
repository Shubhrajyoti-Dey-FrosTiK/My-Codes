#include<bits/stdc++.h>
#include<unordered_map>
using namespace std; 
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector <ll> vll;
typedef vector <ull> vull;
typedef vector <string> vs;
typedef unordered_map <ll,ll> mll;
typedef unordered_map <ull,ull> mull;
typedef unordered_map <ll,string> mls;
typedef unordered_map <ull,string> muls;
typedef unordered_map <string,ll> msl;
typedef unordered_map <string,ull> msul;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases;
    cin>>TestCases;
    while(TestCases--)
    {
        ll NoOfSeasons,Time=0;
        cin>>NoOfSeasons;
        vll IntroTime,NoOfEpisodes;
        
        for(ll i=0;i<NoOfSeasons;i++){ll n; cin>>n; Time+=n; IntroTime.push_back(n);}
        for(ll i=0;i<NoOfSeasons;i++)
        {
            ll n;
            cin>>n;
            for(ll j=0;j<n;j++)
            {
                ll m;
                cin>>m;
                Time+=m-IntroTime[i];
            }
        }
        cout<<Time<<endl;
    }
    return 0;
}