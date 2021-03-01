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
        unordered_map <char,ll> Store;
        unordered_map <char,ll>::iterator itr;
        ll count1=0,countHelp=0;
        string s;
        cin>>s;
        for(ll i=0;i<s.length();i++)
        {Store[s[i]]++;}
        for(itr=Store.begin(); itr!=Store.end();itr++)
        {
            countHelp+=(itr->second)/2;
            if((itr->second)%2==1){count1++;}
        }
        if(count1>countHelp){cout<<"NO";}
        else{cout<<"YES";}
        cout<<endl;
    }
    return 0;
}
