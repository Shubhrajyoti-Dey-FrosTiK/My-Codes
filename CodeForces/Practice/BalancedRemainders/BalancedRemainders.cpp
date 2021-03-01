#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases;
    cin>>TestCases;
    for(ll i=0;i<TestCases;i++)
    {
        ll num,n;
        cin>>num;
        ll count0=0,count1=0,count2=0,target,count=0;
        for(ll j=0;j<num;j++)
        {
            cin>>n;
            if(n%3==0){count0++;}
            if(n%3==1){count1++;}
            if(n%3==2){count2++;}
        }
        ll Arr[3] = {count0,count1,count2};
        target=(count0+count1+count2)/3;
        for(ll j=0;j<3;j++)
        {if(Arr[j]>target){count+=Arr[j]-target; Arr[(j+1)%3]+=Arr[j]-target; Arr[j]=target;}}
        for(ll j=0;j<3;j++)
        {if(Arr[j]>target){count+=Arr[j]-target; Arr[(j+1)%3]+=Arr[j]-target; Arr[j]=target;}}
        cout<<count<<endl;
    }
    return 0;
}