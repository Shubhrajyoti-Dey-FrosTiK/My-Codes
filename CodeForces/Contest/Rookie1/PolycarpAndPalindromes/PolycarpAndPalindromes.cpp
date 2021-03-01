#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCases,Length;
    cin>>TestCases;
    string s;
    int l1,r1,l2,r2,flag=0;
    for(int i=0;i<TestCases;i++)
    {
        flag=1;
        cin>>Length>>s;
        for(int j=0;j<Length;j++)
        {
            if(s[j]!=s[Length-1-j])
            {
                if((int)s[j]<(int)s[Length-1-j]&&(int)s[j]+1!=(int)s[Length-j-1]-1){flag=0;break;}
                if((int)s[j]>(int)s[Length-1-j]&&(int)s[j]-1!=(int)s[Length-j-1]+1){flag=0;break;}
            }
        }
        if(flag){cout<<"YES";}
        else{cout<<"NO";}
        cout<<endl;
    }
    return 0;
}