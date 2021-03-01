#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,val;
    cin>>n;
    int Arr[n][3];
    for(i=0;i<n;i++)
    {cin>>Arr[i][0]>>Arr[i][1]>>Arr[i][2];}
    int ResultantArray[n];
    for(i=1;i<=n;i++)
    {
        for(int j=0;j<3;j++)
        {
            int *p = std::find (Arr[i%n], Arr[i%n]+3, Arr[(i-1)%n][j]);
            if(p==Arr[i%n]+3)
            { val=Arr[(i-1)%6][j]; break;}
        }
        ResultantArray[i%n]=val;
    }
    for(i=0;i<n;i++)
    {cout<<ResultantArray[i]<<" ";}
    return 0;
}