#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int TestCases,Length;
    cin>>TestCases;
    for(int i=0;i<TestCases;i++)
    {
        int Deletions=0;
        cin>>Length;
        string s;
        cin>>s;
        if(s[0]=='<'&&s[Length-1]=='>'){Deletions++;}
        cout<<Deletions<<endl;
    }
    return 0;
}