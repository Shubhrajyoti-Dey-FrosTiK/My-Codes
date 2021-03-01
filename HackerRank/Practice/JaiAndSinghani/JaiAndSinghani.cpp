#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NoOfHankeys,NoOfQuery,max,Num;
    cin>>NoOfHankeys>>NoOfQuery;
    int Hankeys[NoOfHankeys];
    for(int i=0;i<NoOfHankeys;i++)
    {
        cin>>Hankeys[i];
        if(i==0){max=Hankeys[i];}
        else if(Hankeys[i]>max)
        {max=Hankeys[i];}
    }
    vector <int> Store;
    for(int i=0;i<max;i++)
    {Store.push_back(0);}
    for(int i=0;i<NoOfHankeys;i++)
    {Store[Hankeys[i]]++;}
    for(int i=0;i<NoOfQuery;i++)
    {cin>>Num; if(Num<=max){cout<<NoOfHankeys-Store[Num]<<endl;}else{cout<<NoOfHankeys<<endl;}}
    return 0;
}