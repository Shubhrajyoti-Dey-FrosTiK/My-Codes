#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pos,num,a,b;
    cin>>pos>>num;
    int LastPos=pos;
    for(int i=0;i<num;i++)
    {
        cin>>a>>b;
        if(a==LastPos){LastPos=b;}
        else if(b==LastPos){LastPos=a;}
    }
    cout<<LastPos;
    return 0;
}