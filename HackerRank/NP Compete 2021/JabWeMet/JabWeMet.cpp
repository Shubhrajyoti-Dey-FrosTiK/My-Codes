#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll NoOfElements,DummyVar;
    cin>>NoOfElements;
    vector <ll> V1,V2;
    for(ll i=0;i<NoOfElements;i++)
    {cin>>DummyVar; V1.push_back(DummyVar);}
    for(ll i=0;i<NoOfElements;i++)
    {cin>>DummyVar; V2.push_back(DummyVar);}
    sort(V1.begin(),V1.end());
    sort(V2.begin(),V2.end());
    ll product=V1[0]*V2[NoOfElements-1];
    for(ll i=0;i<NoOfElements;i++)
    {if(product!=V1[i]*V2[NoOfElements-1-i]){cout<<"Har kisii koo nahi miltaaa yahan pyaaar zindagiii me"; return 0;}}
    cout<<"Rab ne bana di Jodi"<<endl<<product;
    return 0;
}