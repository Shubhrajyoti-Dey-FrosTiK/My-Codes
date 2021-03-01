#include<bits/stdc++.h>
using namespace std;
int main()
{
    string Username;
    cin>>Username;
    int Arr[26]={0};
    for(int i=0;i<Username.length();i++)
    {Arr[(int)Username[i]-97]++;}
    int Count=0;
    for(int i=0;i<26;i++)
    {if(Arr[i]>0){Count++;}}
    if(Count%2){cout<<"IGNORE HIM!";}
    else{cout<<"CHAT WITH HER!";}
    return 0;
}