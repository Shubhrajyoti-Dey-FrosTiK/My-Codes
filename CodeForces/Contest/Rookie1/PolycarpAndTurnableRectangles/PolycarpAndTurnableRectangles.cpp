#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int NoOfRectangles;
    cin>>NoOfRectangles;
    long long int Length[NoOfRectangles],Breadth[NoOfRectangles],flag=1,Keeper;
    for(long long int i=0;i<NoOfRectangles;i++)
    {cin>>Length[i]>>Breadth[i]; if(Length[i]<Breadth[i]){swap(Length[i],Breadth[i]);}}
    Keeper=Length[0];
    for(long long int i=1;i<NoOfRectangles;i++)
    {
        if(Keeper>=Length[i]){Keeper=Length[i];}
        else if(Keeper>=Breadth[i]){Keeper=Breadth[i];}
        else{cout<<"NO"; flag=0; break;}
    }
    if(flag)
    {cout<<"YES";}
    return 0;
}