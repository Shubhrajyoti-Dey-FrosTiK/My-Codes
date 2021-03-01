#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int NoOfTerms,RequiredLimit,i,sum=0,itr=0,flag=0,pos=-1;
    cin>>NoOfTerms>>RequiredLimit;
    long long int Arr[NoOfTerms],CumulativeSum[NoOfTerms];
    for(i=0;i<NoOfTerms;i++)
    {
        cin>>Arr[i];
        sum+=Arr[i];
        CumulativeSum[i]=sum;
        if(sum>RequiredLimit&&flag==0)
        {pos=i; flag=1;}
    }
    if(pos==-1)
    {cout<<pos;}
    else{
        itr=pos-1;
    while(itr<NoOfTerms)
    {
        flag=1;
        for(i=0;i<NoOfTerms-itr;i++)
        {
            //cout<<CumulativeSum[i+itr]-CumulativeSum[i]+Arr[i]<<" ";
            if(CumulativeSum[i+itr]-CumulativeSum[i]+Arr[i]<=RequiredLimit)
            {flag=0; break;}
        }
        //cout<<flag<<" "<<itr<<endl;
        if(flag)
        {cout<<++itr; break;}
        itr++;
    }
    }
    return 0;
}