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
        ll a,b,c,sum=0,min;;
        cin>>a>>b>>c;
        min=a-1; 
        if(min>b-1){min=b-1;}
        if(min>c-1){min=c-1;}
        if(a>1){sum+=a-1;}
        if(b>1){sum+=b-1;}
        if(c>1){sum+=c-1;}
        // cout<<min<<" ";
        if(sum!=0&&sum%9==6&&min>=sum/9){cout<<"YES";}
        else{cout<<"NO";}
        cout<<endl;
    }
    return 0;
}