#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    string s;
    getline(cin,s);
    string str="geek";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int count=0;
    while(s.length()>0)
    {   
        size_t found = s.find(str);
        if(found==string::npos){count=-1; break;}
        else if(found!=string::npos)
        {s.replace(found,4,""); count++;}
    }
    cout<<count;
    return 0;
}