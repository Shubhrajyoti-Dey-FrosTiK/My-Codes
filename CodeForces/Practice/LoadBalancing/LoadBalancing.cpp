#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    long int NoOfElements,Count=0;
    cin>>NoOfElements;
    long int Arr[NoOfElements];
    for(int i=0;i<NoOfElements;i++)
    {cin>>Arr[i];}
    sort(Arr,Arr+sizeof(Arr)/sizeof(Arr[0]));
    for(int i=0;i<NoOfElements/2;i++)
    {Count+=((Arr[0]+Arr[NoOfElements-1])/2)-Arr[i];}
    cout<<Count;
    return 0;
}