#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NoOfOperations,X=0;
    cin>>NoOfOperations;
    string s;
    for(int i=0;i<NoOfOperations;i++)
    {
        cin>>s;
        if(s[1]=='+'){X++;}
        else{X--;}
    }
    cout<<X;
    return 0;
}