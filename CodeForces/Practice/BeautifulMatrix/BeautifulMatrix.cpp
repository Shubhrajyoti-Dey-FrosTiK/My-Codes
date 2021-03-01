#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M[5][5],x,y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>M[i][j];
            if(M[i][j]==1)
            {x=i; y=j;}
        }
    }
    x=abs(2-x); y=abs(2-y);
    cout<<x+y;
    return 0;
}