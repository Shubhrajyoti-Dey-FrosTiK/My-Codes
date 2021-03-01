#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int TestCases,NoOfElements,flag=0;
    cin>>TestCases;
    for(int i=0;i<TestCases;i++)
    {
        flag=0;
        cin>>NoOfElements;
        int Arr[NoOfElements],sum=0,Index[NoOfElements],CumulativeSum[NoOfElements];
        for(int j=0;j<NoOfElements;j++)
        {cin>>Arr[j]; sum+=Arr[j]; Index[Arr[j]-1]=j+1;}
        cout<<"1";
        // for(int j=0;j<NoOfElements;j++)
        // {cout<<Index[j]<<" ";}
        // for(int j=0;j<NoOfElements;j++)
        // {sum+=Index[j]; CumulativeSum[j]+=sum; cout<<CumulativeSum[j]<<" ";}
        // for(int j=2;j<=NoOfElements;j++)
        // {
        //     if(CumulativeSum[j]==(j*(j+1))/2)
        //     {cout<<"1";}
        //     else{cout<<"0";}
        // }
        for(int j=2;j<NoOfElements;j++)
        {
            sum=0;
            for(int k=0;k+j<NoOfElements;k++)
            {sum+=Arr[k];}
            if(sum==(j*(j+1))/2)
            {cout<<"1";}
            else
        }

        cout<<endl;
    }
    return 0;
}