#include<bits/stdc++.h>
using namespace std;

void Display(string s)
{
    for(int i=0;i<s.length();i++)
    {cout<<s[i];}
}

void Reverse(string s,int i,int j)
{
    if(s[i]==' '){i++;}
    if(s[j]==' '){j--;}
    cout<<i<<" "<<j<<"\n";
    if(i>s.length()/2)
    {Display(s);}
    else if((int)toupper(s[i])>(int)toupper(s[j]))
    { Reverse(s,i+1,j-1); }
    else
    {  
        char swap=s[i];
        s[i]=s[j];
        s[j]=swap;
        Reverse(s,i+1,j-1);
    }
}

int main()
{
    string s;
    getline(cin,s);
    Reverse(s,0,s.length());
    return 0;
}