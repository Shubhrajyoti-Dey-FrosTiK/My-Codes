#include<bits/stdc++.h>
using namespace std;
long long int Combinations(long long int n)
{
    long long int sum=0,i,LastVal=0;
    for(i=0;i<n;i++)
    {LastVal=sum; sum+=(i+1)*LastVal+2;}
    return sum;
}
int main()
{
    long long int Starting,Ending,p1,p2,total=0;
    cin>>Starting>>Ending>>p1>>p2;
    total+=Combinations(p1-Starting-1)+Combinations(Ending-p1-2);
    total+=Combinations(p2-Starting-2)+Combinations(Ending-p2-1);
    total+=Combinations(p1-Starting-1)+Combinations(p2-p1-1)+Combinations(Ending-p2-1);
    cout<<total;
    return 0;
}