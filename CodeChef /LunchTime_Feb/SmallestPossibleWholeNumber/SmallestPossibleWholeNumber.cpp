#include<bits/stdc++.h>
#include<unordered_map>
using namespace std; 
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector <ll> vll;
typedef unordered_map <ll,ll> mll;
typedef unordered_map <ll,string> mls;
typedef unordered_map <string,ll> msl;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases;
    cin>>TestCases;
    while(TestCases--)
    {
        ll n,k;
        cin>>n>>k;
        if(k==0){cout<<n<<endl; continue;}
        cout<<n-((n/k)*k)<<endl;
    }
    return 0;
}