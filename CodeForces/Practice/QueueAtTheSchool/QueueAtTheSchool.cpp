#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NoOfStudents,Time;
    cin>>NoOfStudents>>Time;
    string Students;
    cin>>Students;
    for(int i=0;i<Time;i++)
    {
        for(int j=0;j<NoOfStudents-1;j++)
        {
            if(Students[j]=='B'&&Students[j+1]=='G')
            {swap(Students[j],Students[j+1]); j=j+1;}
        }
    }
    for(int i=0;i<NoOfStudents;i++)
    {cout<<Students[i];}
    return 0;
}