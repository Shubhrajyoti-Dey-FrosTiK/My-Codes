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
    ll TestCase;
    cin>>TestCase;
    while(TestCase--)
    {
        ll Num;
        cin>>Num;
        vll Store;
        while(Num--){ll n; cin>>n; Store.push_back(n);}
        sort(Store.begin(),Store.end());
        ll cal1=Store[0]*Store[1]+abs(Store[1]-Store[0]);
        ll cal2=Store[Store.size()-1]*Store[Store.size()-2]+abs(Store[Store.size()-1]-Store[Store.size()-2]);
        cout<<max(cal1,cal2)<<endl;
    }
    return 0;
}