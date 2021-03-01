#include<bits/stdc++.h>
using namespace std;

int Finder(int Previous,int Next)
{
    for(int i=97;i<100;i++)
    {
        if(i!=Previous&&i!=Next)
        {return i;}
    }
    return 0;
}

int main()
{
    int TestCases,flag=1;
    cin>>TestCases;
    string s,ch1,ch2;
    for(int i=0;i<TestCases;i++)
    {
        flag=1;
        cin>>s;
        int Arr[s.length()],Previous,Next,Value;
        for(int j=0;j<s.length()-1;j++)
        {
            if(s[j]==s[j+1]&&s[j]!='?')
            {flag=0; cout<<"-1"; break; }
        }
        // cout<<s[0];
        if(s.length()==1&&s[0]=='?'){cout<<"a"; flag=0;} 
        else if(s[0]=='?'&&s[1]=='?'){s.replace(0,1,"a");}
       // cout<<s[0];
        if(flag)
        {
            for(int j=0;j<s.length();j++)
            {Arr[j]=(int)s[j];}
            for(int j=0;j<s.length();j++)
            {
                if(s[j]=='?')
                {
                    if(j==0){Arr[j]=Finder(Arr[j+1],Arr[j+1]); }
                    else if(j==s.length()-1||s[j+1]=='?'){Arr[j]=Finder(Arr[j-1],Arr[j-1]); }
                    else {Arr[j]=Finder(Arr[j-1],Arr[j+1]); }
                    cout<<(char)Arr[j];
                }
                else{cout<<s[j];}
            }
        }
        cout<<endl;
    }
    return 0;
}