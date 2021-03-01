#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCase;
    cin>>TestCase;
    while(TestCase--)
    {
        vector <ll> Store;
        ll r,g,b,w,count=0,sum=0;
        cin>>r>>g>>b>>w;
        sum+=r+g+b+w;
        Store.push_back(r); Store.push_back(g); Store.push_back(b);  Store.push_back(w);
        sort(Store.begin(),Store.begin()+3);
        for(ll i=0;i<4;i++)
        {if(Store[i]%2==1){count++;}}
        if(count<=1){cout<<"Yes";}
        else if(Store[0]>0)
        {
            count=0;
            Store[0]--; Store[1]--; Store[2]--; Store[3]+=3; 
            for(ll i=0;i<4;i++)
            {if(Store[i]%2==1){count++;}}
            if(count<=1){cout<<"Yes";}
            else{cout<<"No";}
        }
        else{cout<<"No";}
        cout<<endl;
    }
    return 0;
}
