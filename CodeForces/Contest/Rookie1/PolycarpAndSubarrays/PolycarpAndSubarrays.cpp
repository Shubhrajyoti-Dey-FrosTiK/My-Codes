#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int NoOfElements,NoOfSubsets,i,j;
    cin>>NoOfElements>>NoOfSubsets;
    long long int Arr[NoOfElements],DiffKeeper[NoOfElements-1],sum=0;
    for(i=0;i<NoOfElements;i++)
    {cin>>Arr[i]; if(i>0){DiffKeeper[i-1]=Arr[i]-Arr[i-1];}}
    sort(DiffKeeper,DiffKeeper+NoOfElements-1);
    for(i=0;i<NoOfElements-NoOfSubsets;i++)
    {sum+=DiffKeeper[i];}
    cout<<sum;
    return 0;
}