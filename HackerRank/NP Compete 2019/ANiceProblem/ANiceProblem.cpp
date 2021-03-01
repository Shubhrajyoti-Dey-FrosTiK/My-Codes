#include<bits/stdc++.h>
using namespace std;

int MinIndex(int Arr[],int n)
{
    int min=Arr[0],index=0,i;
    for(i=0;i<n;i++)
    { if(Arr[i]<min){index=i; }}
    return index;
}

int main()
{
    int Elements,K,count=0;
    cin>>Elements>>K;
    int Arr[Elements];
    for(int i=0;i<Elements;i++)
    {cin>>Arr[i];}
    int index=MinIndex(Arr,Elements);
    while(count<K)
    {
        Arr[index]++;
        index=MinIndex(Arr,Elements);
        count++;
    }
    cout<<Arr[MinIndex(Arr,Elements)];
    return 0;
}