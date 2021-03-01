#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int dummy,num,Result=1;
    cin>>num;
    dummy=num;
    vector<int> V;
    while(dummy!=0)
    { V.push_back(dummy%10); dummy/=10;}
    reverse(V.begin(), V.end());
    for(long long int i=0;i<V.size()-1;i++)
    {  
        for(long long int j=i+1;j<V.size();j++)
        { Result*=abs(V[i]-V[j])%(long long int)(pow(10,9)+7);  }
    }
    cout<<Result%(long long int)(pow(10,9)+7);
    return 0;
}