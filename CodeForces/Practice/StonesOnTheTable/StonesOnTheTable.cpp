#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NoOfCharacters,NoOfRemoval=0,Term;
    cin>>NoOfCharacters;
    string s;
    cin>>s;
    Term=(int)s[0];
    for(int i=1;i<s.length();i++)
    {if(Term==(int)s[i]){NoOfRemoval++;}else{Term=(int)s[i];}}
    cout<<NoOfRemoval;
    return 0;
}