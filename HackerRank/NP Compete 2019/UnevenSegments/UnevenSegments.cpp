#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    //long long int Arr[(int)pow(10,9)]={};
    long long int LeftBoundary[n],RightBoundary[n],i,j,max=1,count=0;
    for(i=0;i<n;i++)
    {
        cin>>LeftBoundary[i]>>RightBoundary[i];
        if(i==0){max=RightBoundary[i];}
        if(RightBoundary[i]>max){max=RightBoundary[i];}
    }
   
    return 0;
}