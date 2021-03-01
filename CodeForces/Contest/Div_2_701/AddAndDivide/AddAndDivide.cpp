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
        ll a,b,count=0;
        cin>>a>>b;
        while(a!=0)
        {
            cout<<a<<" "<<b<<endl;
            if(a<b){count++; break;}
            else if(a==b){count+=2; break;}
            else if(a/b<b){a/=b; count++;}
            else if(a%b==0){b++; count++;}
            
            else if(a%b>=b/2-1){a/=b; count++;}
            else{b++; count++;}
        }
        // while(a!=0)
        // {
        //     if(a<b){count++; break;}
        //     else if(a==b){count+=2; break;}
        //     else if(a%b==0){a/=b; count++;}
        //     else if(a%b>0){b++; count++;}
        // }
        cout<<count<<endl<<endl;;
    }
    return 0;
}