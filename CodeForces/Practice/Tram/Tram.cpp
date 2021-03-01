#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Stops,Entering,Leaving,Capacity=0,MaxCount=-1;
    cin>>Stops;
    for(int i=0;i<Stops;i++)
    {cin>>Leaving>>Entering; Capacity+=Entering-Leaving; if(Capacity>MaxCount){MaxCount=Capacity;}}
    cout<<MaxCount;
    return 0;
}
