#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCases,Num;
    cin>>TestCases;
    int sum=0,count=0;
    for(int i=0;i<TestCases;i++)
    {
        sum=0;
        cin>>Num; sum+=Num;
        cin>>Num; sum+=Num;
        cin>>Num; sum+=Num;
        if(sum>=2){count++;}
    }
    cout<<count;
    return 0;
}