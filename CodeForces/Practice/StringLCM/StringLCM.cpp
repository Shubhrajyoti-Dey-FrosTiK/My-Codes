#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main()
{
    int TestCases;
    cin>>TestCases;
    for(int i=0;i<TestCases;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        int L =(s1.length()*s2.length())/gcd(s1.length(),s2.length());
        int flag=1;
        for(int j=0;j<L;j++)
        {
            if(s1[j%s1.length()]!=s2[j%s2.length()]){cout<<"-1"<<endl;flag=0; break;}
        }
        if(flag)
        {
            for(int j=0;j<L;j++){cout<<s1[j%s1.length()];}
            cout<<endl;
        }
    }
    return 0;
}