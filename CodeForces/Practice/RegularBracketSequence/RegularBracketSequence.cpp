#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int TestCases;
    cin>>TestCases;
    for(int i=0;i<TestCases;i++)
    {
        string s;
        cin>>s;
        // cout<<s.size()<< " ";
        if(s[0]==')'||s[s.length()-1]=='('||s.length()%2==1)
        {cout<<"NO";}
        else{cout<<"YES";}
        cout<<endl;
    }
    return 0;
}