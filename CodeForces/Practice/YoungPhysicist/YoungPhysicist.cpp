#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NoOfForces;
    cin>>NoOfForces;
    int XSum=0,YSum=0,ZSum=0,x,y,z;
    for(int i=0;i<NoOfForces;i++)
    {
        cin>>x>>y>>z;
        XSum+=x; YSum+=y; ZSum+=z;
    }
    if(XSum==0&&YSum==0&&ZSum==0)
    {cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}