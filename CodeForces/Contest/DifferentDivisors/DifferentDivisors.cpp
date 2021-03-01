#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
    if(n!=2||n!=1){
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0){return 0;}
    }}
    return 1;
}

int func(int d)
{
   
    while(!prime(d))
    {d++;} //cout<<d<<" ";
    return d;
}

int main()
{
    int TestCases,Difference,num;
    cin>>TestCases;
    for(int i=0;i<TestCases;i++)
    {
        cin>>Difference;
        int num1=func(Difference+1);
        int num2=func(num1+Difference);
        cout<<num1*num2<<endl;
    }
    return 0;
}