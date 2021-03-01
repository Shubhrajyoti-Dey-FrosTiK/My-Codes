// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// int main()
// {
    
//     string s1,s2;
//     int Arr[122]={0};
//     cin>>s1>>s2;
//     int n,flag=1;
//     for(int i=0;i<(int)s1.length();i++)
//     {n=s1[i]; Arr[n]++; }
//     for(int i=0;i<(int)s2.length();i++)
//     {n=s2[i]; Arr[n]++; }
//     for(int i=0;i<123;i++)
//     {
//         if(Arr[i]%2==1)
//         { flag=0; break; }
//     }
//     if(flag==1){cout<<"YES";}
//     else{cout<<"NO";}
//     return 0;
// }


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