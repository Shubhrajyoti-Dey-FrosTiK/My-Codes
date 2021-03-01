#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    long long int TestCases,NoOfElements,K,i,j;
    cin>>TestCases;
    for(i=0;i<TestCases;i++)
    {
        cin>>NoOfElements>>K;
        long long int p=NoOfElements/K,Val;
        if(NoOfElements%K){p++;}
        Val=(K*p)/NoOfElements;
        if((K*p)%NoOfElements!=0){Val++;}
        cout<<Val<<endl;
    }
    return 0;
}