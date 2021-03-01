#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NoOfLetters,ReqStages;
    cin>>NoOfLetters>>ReqStages;
    int Store[26]={0},count=0,weight=0;
    string Stages;
    cin>>Stages;
    for(int i=0;i<NoOfLetters;i++)
    {Store[(int)Stages[i]-97]=1;}
    for(int i=0;i<26;i++)
    {
        if(Store[i]==1)
        {count++; weight+=i+1; i++;}
        if(count>=ReqStages)
        {break;}
    }
    if(count==ReqStages){cout<<weight;}
    else{cout<<"-1";}
    return 0;
}