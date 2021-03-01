#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Lw,Bw,Count=0;
    cin>>Lw>>Bw;
    while(Lw<=Bw)
    {Count++; Lw*=3; Bw*=2;}
    cout<<Count;
    return 0;
}