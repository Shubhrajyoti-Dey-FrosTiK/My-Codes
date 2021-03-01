#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCases,K,count=0,num,val;
    cin>>TestCases>>K;
    int Arr[TestCases];
    for(int i=0;i<TestCases;i++)
    {cin>>Arr[i];}
    for(int i=0;i<TestCases;i++)
    {if(Arr[i]>0&&Arr[i]>=Arr[K-1]){count++;}}
    cout<<count;
} 