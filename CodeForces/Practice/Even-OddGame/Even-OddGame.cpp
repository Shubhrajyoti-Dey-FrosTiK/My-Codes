#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCases,NoOfElements;
    cin>>TestCases;
    vector <int> Elements,Alice,Bob;
    for(int i=0;i<TestCases;i++)
    {
        cin>>NoOfElements;
        int DummyVar;
        for(int j=0;j<NoOfElements;j++)
        {cin>>DummyVar; Elements.push_back(DummyVar);}
        sort(Elements.begin(),Elements.end());

    }
    return 0;
}