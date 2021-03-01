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
        ll NoOfFrogs;
        cin>>NoOfFrogs;
        ll Dummy;
        map <ll,ll> Element,CapableJump;
        vector <ll> Store;
        map <ll,ll>::iterator itr,itr2;
        for(ll j=0;j<NoOfFrogs;j++)
        {cin>>Dummy; Element[Dummy]=j; Store.push_back(Dummy);} 
        for(ll j=0;j<NoOfFrogs;j++)
        {cin>>Dummy; CapableJump[Store[j]]=Dummy;}
        //Here we take weight as a the distance from the origin
        ll LastElementDistance=Element[1],count=0;
        // cout<<LastElementDistance<<endl;
        // cout<<LastElementDistance<<endl;
        for(ll j=2;j<=NoOfFrogs;j++)
        {
            ll n;
            if(Element[j]<LastElementDistance)
            {
                n=(LastElementDistance-Element[j]+1)/CapableJump[j];
                count+=n;
                if((LastElementDistance-Element[j]+1)%CapableJump[j]>0)
                {count++; n++;}
                LastElementDistance=Element[j]+(CapableJump[j]*n);
                // cout<<Element[j]<<" "<<LastElementDistance<<endl;
            }
            else 
            {LastElementDistance=Element[j];}
            
        }
        cout<<count<<endl;
        // for(itr=Element.begin(),itr2=CapableJump.begin();itr!=Element.end();itr++,itr2++)
        // {cout<<itr->first<< " "<<itr->second<<" "<<itr2->second<<endl;}
        // cout<<endl;
    }
    return 0;
}