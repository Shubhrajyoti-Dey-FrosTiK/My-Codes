#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase,NoOfElements,i;
    cin>>TestCase;
    for(i=0;i<TestCase;i++)
    {
        cin>>NoOfElements;
        int val,ResultantArr[101]={0};
        for(int j=0;j<NoOfElements;j++)
        {cin>>val; ResultantArr[val]++;}
        int max=0;
        for(int j=0;j<101;j++)
        {if(ResultantArr[j]>max){max=ResultantArr[j];}}
        cout<<max<<endl;
    }
    return 0;
}

