#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int Count=0;
    for(int i=0;i<strlen(s);i++)
    {if((int)s[i]>=97){Count++;}}
    for(int i=0;i<strlen(s);i++)
    {
        if(Count>=strlen(s)-Count){cout<<(char)tolower(s[i]);}
        else{cout<<(char)toupper(s[i]);}
    }
    return 0;
}