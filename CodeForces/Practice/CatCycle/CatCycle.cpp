//https://codeforces.com/problemset/problem/1487/B
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCase;
    cin>>TestCase;
    while(TestCase--)
    {
        ll n,k;
        cin>>n>>k;
        ll val=((k-1)%n)+1;
        if(n%2==1)
        {
            val+=(k/(n/2));
            if(k%(n/2)==0){val--;}
            val=((val-1)%n)+1;
        }
        cout<<val<<endl;
    }
    return 0;
}