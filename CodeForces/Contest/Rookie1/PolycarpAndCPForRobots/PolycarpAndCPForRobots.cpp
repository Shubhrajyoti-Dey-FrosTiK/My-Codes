#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int Arr1[n],Arr2[n],sum=0,count=0,flag=0;
    for(int i=0;i<n;i++)
    {cin>>Arr1[i];}
    for(int i=0;i<n;i++)
    {
        cin>>Arr2[i];
        if(Arr1[i]==0){sum+=Arr2[i];}
        if(Arr1[i]==1&&Arr2[i]==0){count++;}
        if(Arr1[i]!=Arr2[i]){flag=1;}
    }
    if(flag==1&&count!=0)
    {cout<<(sum/count)+1;}
    else{cout<<"-1";}
    return 0;
}