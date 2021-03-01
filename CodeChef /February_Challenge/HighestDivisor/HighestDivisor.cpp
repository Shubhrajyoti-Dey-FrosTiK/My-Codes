#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Num;
    cin>>Num;
    for(int i=10;i>0;i--)
    {if(Num%i==0){cout<<i; break;}}
    return 0;
}