#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> V;
    string s;
    cin>>s;
    
    for(int i=1;i<s.length()-1;i=i+2)
    {
        if(s[i+1]==','||s[i+1]==']')
        V.push_back((int)(s[i])-48);
        else
        {
            i++;
            V.push_back((-1)*((int)(s[i])-48));
        }
    }
    V.push_back((int)s[s.length()-1]-48);
    for(int i=0;i<V.size()-1;i++)
    {cout<<V[i]<<" ";}
    return 0;
}