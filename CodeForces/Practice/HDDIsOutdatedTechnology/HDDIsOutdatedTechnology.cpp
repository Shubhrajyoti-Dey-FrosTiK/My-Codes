#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NoOfFragments; cin>>NoOfFragments;
    int Store,Index[NoOfFragments];
    long long int time=0;
    for(int i=0;i<NoOfFragments;i++)
    {cin>>Store; Index[Store-1]=i;}
    for(int i=0;i<NoOfFragments-1;i++)
    {time+=abs(Index[i+1]-Index[i]);}
    cout<<time;
    return 0;
}