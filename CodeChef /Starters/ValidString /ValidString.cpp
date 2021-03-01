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
        ll Len,Req;
        cin>>Len>>Req>>ws;
        string s;
        cin>>s;
        ll count=0;
        vll NoOfZeros;
        for(ll i=0;i<s.size();i++)
        {
            if(((int)s[i])-48==1){NoOfZeros.push_back(count); count=0;}
            else{count++;}
        }
        NoOfZeros.push_back(count);
        ll var=NoOfZeros[0]+NoOfZeros[NoOfZeros.size()-1];
        NoOfZeros.erase(NoOfZeros.begin());
        NoOfZeros[NoOfZeros.size()-1]=var;
        count=0;
        // cout<<NoOfZeros[NoOfZeros.size()-1];
        for(ll i=0;i<NoOfZeros.size();i++)
        {
            if(NoOfZeros[i]>Req){count++;}
        }
        if(count>1){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
    }
    return 0;
}