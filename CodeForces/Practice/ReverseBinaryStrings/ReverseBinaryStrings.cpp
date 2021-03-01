#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases;
    cin>>TestCases;;
    for(ll i=0;i<TestCases;i++)
    {
        string s;
        ll length;
        ll count=0;
        cin>>length>>ws;
        cin>>s;
        ll j;
        for(j=1;j<length;j++)
        {
            if(s[j-1]==s[j])
            {count++;}
        }
        cout<<ceil(count/2.0)<<endl;
    }
    return 0;
}