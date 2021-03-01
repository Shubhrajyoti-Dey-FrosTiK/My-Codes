#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0,i;
    getline(cin,s);
    for(i=s.length()-1; ; i--)
    {if(s[i]==' '){break;} if(i==0){i--;break;}}
    cout<<s.length()-1-i;
    return 0;
}