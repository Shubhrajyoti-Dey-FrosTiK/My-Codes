#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll NoOfElements,n;
    cin>>NoOfElements;
    vector <ll> Store1,Store2;
    if(NoOfElements<2){cout<<NoOfElements; return 0;}
    else 
    {
        cin>>n; Store2.push_back(n);
        cin>>n; 
        if(n==Store2[0]){Store1.push_back(n);}
        else{Store2.push_back(n);}
    }
    for(ll i=2;i<NoOfElements;i++)
    {
        cin>>n;
        if(n==Store2[Store2.size()-1])
        {
            if(Store1.size()==0||Store1[Store1.size()-1]!=n)
            {Store1.push_back(n);}
        }
        else{Store2.push_back(n);}
    }
    cout<<Store1.size()+Store2.size()<<endl;
    return 0;
}
