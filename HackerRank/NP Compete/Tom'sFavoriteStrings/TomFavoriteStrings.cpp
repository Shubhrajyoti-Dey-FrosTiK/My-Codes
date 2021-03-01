#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int Arr[26]={0};
    for(int i=0;i<s1.length();i++)
    {Arr[(int)s1[i]-97]++;}
    for(int i=0;i<s2.length();i++)
    {Arr[(int)s2[i]-97]++;}
    for(int i=0;i<26;i++)
    {if(Arr[i]%2!=0){cout<<"NO"; return 0;}}
    cout<<"YES";
    return 0;
}