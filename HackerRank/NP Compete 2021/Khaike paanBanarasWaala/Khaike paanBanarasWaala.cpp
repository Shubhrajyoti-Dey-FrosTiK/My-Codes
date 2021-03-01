#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll N,product=1;
    cin>>N;
    while(N>0)
    {product*=N; N/=2;}
    cout<<product;
    return 0;
}