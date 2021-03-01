#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll NoOfCandles,NoOfCandlesLit=0;
    cin>>NoOfCandles;
    ll i=1;
    while(i*i<=NoOfCandles){NoOfCandlesLit++; i++;}
    cout<<NoOfCandlesLit;
    return 0;
}