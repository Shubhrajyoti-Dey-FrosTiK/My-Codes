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
        ll Delivery,Coupon;
        cin>>Delivery>>Coupon;
        ll Cost1=0,Cost2=0,count=0;
        for(ll i=0;i<3;i++)
        {ll n; cin>>n; Cost1+=n;}
        for(ll i=0;i<3;i++)
        {ll n; cin>>n; Cost2+=n;}
        if(Cost1>=150){count++;}
        if(Cost2>=150){count++;}
        if(Coupon+(Delivery*(2-count))<Delivery*2){cout<<"YES";}
        else{cout<<"NO";}
        cout<<endl;
    }
    return 0;
}