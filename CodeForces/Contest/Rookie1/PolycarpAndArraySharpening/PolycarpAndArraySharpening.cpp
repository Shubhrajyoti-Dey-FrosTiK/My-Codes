#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    long long int TestCases,i,j,NoOfElements;
    cin>>TestCases;
    long long int Max,MaxIndex,flag;
    for(i=0;i<TestCases;i++)
    {
        flag=1;
        cin>>NoOfElements;
        long long int Arr[NoOfElements];
        for(j=0;j<NoOfElements;j++)
        {
            cin>>Arr[j];
            if(j==0){Max=Arr[0]; MaxIndex=0;}
            else if(Arr[j]>Max){Max=Arr[j]; MaxIndex=j;}
        }
        for(j=0;j<=MaxIndex;j++)
        { if(Arr[j]<j){cout<<"No"<<endl; flag=0; break;}}
        if(!flag){continue;}
        for(j=MaxIndex;j<NoOfElements;j++)
        { if(Arr[j]<NoOfElements-1-j){cout<<"No"<<endl;; flag=0; break;}}
        if(!flag){continue;}
        cout<<"Yes"<<endl;;
    }
    return 0;
}