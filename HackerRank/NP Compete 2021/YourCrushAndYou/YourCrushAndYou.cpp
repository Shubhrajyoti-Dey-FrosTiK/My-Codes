#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int gcd(int divisor,int divident)
{
    if(divident%divisor==0){return divisor;}
    else{return gcd(divident%divisor,divisor);}
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll N;
    cin>>N;
    int flag=0,Compare=N+1;
    while(flag!=1)
    {
        if(gcd(N,Compare)==1){flag=1; cout<<Compare;}
        Compare++;
    }
    return 0;
}