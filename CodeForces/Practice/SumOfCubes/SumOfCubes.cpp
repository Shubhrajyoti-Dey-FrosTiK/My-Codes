#include<bits/stdc++.h>
#include<unordered_map>
using namespace std; 
typedef unsigned long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int TestCases;
    cin>>TestCases;
    unordered_map <ll,ll> Store;
    unordered_map <ll,ll>::iterator itr;
    ll i=1;
    while(pow(i,3)<=pow(10,12))
    {Store[(ll)pow(i,3)] = 1; i++;}
    for(i=0;i<TestCases;i++)
    {
        ll num,j=1;
        int flag = 0;
        cin>>num;
        while(pow(j,3)<num)
        {if(Store[num-pow(j,3)]==1){flag=1; break;} j++;}
        if(flag==1){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}