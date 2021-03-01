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
    ll NoOfTerms,NoOfQuarries;
    cin>>NoOfTerms>>NoOfQuarries;
    ll One=0,Zero=0;
    vll Store;
    while(NoOfTerms--)
    {
        ll n;
        cin>>n;
        if(n==1){One++;}
        Store.push_back(n);
    }
    while(NoOfQuarries--)
    {
        ll Quarry,Index;
        cin>>Quarry>>Index;
        if(Quarry==1)
        {
            if(Store[Index-1]==0){ One++;}
            else{ One--;}
            Store[Index-1]=1-Store[Index-1];
        }
        else if (Quarry==2)
        {
            if(One>=Index){cout<<"1"<<endl;}
            else{cout<<"0"<<endl;}
        }
    }
    return 0;
}