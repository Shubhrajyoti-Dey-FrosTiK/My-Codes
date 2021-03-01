#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S1,S2;
    int i;
    cin>>S1>>S2;
    for(i=0;i<S1.length();i++)
    {
        if((int)toupper(S1[i])>(int)toupper(S2[i]))
        {cout<<"1"; break;}
        if((int)toupper(S1[i])<(int)toupper(S2[i]))
        {cout<<"-1"; break;}
    }
    if(i==S1.length())
    {cout<<"0";}
    return 0;
}