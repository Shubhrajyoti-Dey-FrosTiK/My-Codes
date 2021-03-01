#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases;
    cin>>TestCases;
    while(TestCases--)
    {
        ll Rows,Columns,count=0,i=0;
        cin>>Rows>>Columns;
        string s;
        ll Store[Rows][Columns];
        while(i<Rows)
        {
            cin>>s;
            for(ll j=0;j<Columns;j++){Store[i][j]=((int)s[j])-48; if(Store[i][j]==1){count++;}}
            i++; 
        }
        if(count%2==0||count==0){cout<<"No"<<endl;}
        else if(Rows*Columns==2&&count==2){cout<<"Yes"<<endl;}
        {
            ll flag=1;
            for(ll i=1;i<Rows;i++)
            {
                for(ll j=1;j<Columns-1;j++)
                {
                    if(Store[i][j]==0)
                    {
                        if(Store[i-1][j]==1&&Store[i][j-1]==1){flag=0; break;}
                        else if()
                    }
                }
            }
        }
    }
    return 0;
}