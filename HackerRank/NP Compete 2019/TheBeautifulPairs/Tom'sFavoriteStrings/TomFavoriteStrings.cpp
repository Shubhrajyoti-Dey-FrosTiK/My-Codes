#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    int Arr[122]={0};
    cin>>s1>>s2;
    int n,flag=1;
    for(int i=0;i<(int)s1.length();i++)
    {n=s1[i]; Arr[n]++; }
    for(int i=0;i<(int)s2.length();i++)
    {n=s2[i]; Arr[n]++; }
    for(int i=0;i<123;i++)
    {
        if(Arr[i]%2==1)
        { flag=0; break; }
    }
    if(flag==1){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}