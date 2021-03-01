#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCases;
    cin>>TestCases;
    for(int i=0;i<TestCases;i++)
    {
        int N,count=0;
        cin>>N;
        while(N!=1)
        {
            if(ceil(log2(N))==floor(log2(N)))
            {N=log2(N); cout<<N; count++;}
            else{break;}
        }
        cout<<count<<endl;
    }
    return 0;
}