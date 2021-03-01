#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M,N,count=0;
    cin>>M>>N;
    if(M>N){swap(M,N);}
    cout<<((N/2)*M)+((N%2)*(M/2));
    return 0;
}