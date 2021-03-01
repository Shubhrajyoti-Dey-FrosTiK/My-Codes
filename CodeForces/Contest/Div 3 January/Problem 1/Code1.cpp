#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int TestCases,i,j,flag=0;
    cin>>TestCases;
    long long int Var;
    for(i=0;i<TestCases;i++)
    {
        flag=0;
        cin>>Var;
        if(ceil(log2(Var))!=floor(log2(Var))){cout<<"YES";}
        else{cout<<"NO";}
        cout<<endl;
    }   
    return 0;
}