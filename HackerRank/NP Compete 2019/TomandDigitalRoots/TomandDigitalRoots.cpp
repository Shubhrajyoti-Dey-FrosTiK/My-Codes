#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int Starting,Ending,sum=0;
    cin>>Starting>>Ending;
    int Arr[9]={9,1,2,3,4,5,6,7,8};
    long long int LeftBoundary,RightBoundary;
    LeftBoundary=Starting+9-Arr[Starting%9];
    RightBoundary=Ending-Arr[Ending%9];
    if(LeftBoundary>RightBoundary)
    {cout<<((Arr[Ending%9]-Arr[Starting%9]+1)*(Arr[Starting%9]+Arr[Ending%9]))/2;}
    else
    {
        sum+=((9-Arr[Starting%9]+1)*(9+Arr[Starting%9]))/2;
        sum+=((Arr[Ending%9])*(1+Arr[Ending%9]))/2;
        sum+=((RightBoundary-LeftBoundary)/9)*45;
        cout<<sum;
    }
    return 0;
}
