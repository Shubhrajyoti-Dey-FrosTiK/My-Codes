#include<bits/stdc++.h>
#include<unordered_map>
using namespace std; 
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector <ll> vll;
typedef unordered_map <ll,ll> mll;
typedef unordered_map <ll,string> mls;
typedef unordered_map <string,ll> msl;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ull TestCases,num=0;
    vector<ull> p(3,0);
    for(ull i=(pow(10,8))-1;i>2;i--)
    {
        ull flag=1;
        for(ull j=2;j<=i/2;j++)
        {if(i%j==0){flag=0; break;}}
        if(flag==1){p[num]=i; num++;}
        if(num==3){break;}
    }
    cin>>TestCases;
    while (TestCases--)
    {
        ll Left,Right,i;
        cin>>Left>>Right;
        for(i=0;i<3;i++)
        {
            if(p[i]%Left>0&&p[i]%Right>0)
            {break;}
        }
       cout<<p[i]<<endl;
    }
    return 0;
}