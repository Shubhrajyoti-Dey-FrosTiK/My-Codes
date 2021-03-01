#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int NoOfElements,Dummy;
    cin>>NoOfElements;
    vector <int> Elements,XORKeeper;
    int x;
    for(int i=0;i<NoOfElements;i++)
    {
        cin>>Dummy; Elements.push_back(Dummy);
        if(i>0){x=x^Dummy; XORKeeper.push_back(x);}
        else{x=Dummy; XORKeeper.push_back(x);}
    }
    cout<<XORKeeper[XORKeeper.size()-1];
    int NoOfQueries;
    cin>>NoOfQueries;
    for(int i=0;i<NoOfQueries;i++)
    {
        int sum=0;
        int Query;
        cin>>Query;
        for(ll j=0;j+Query<NoOfElements;j++)
        {
            if(j==0)
            {sum+=XORKeeper[Query-1]; cout<<XORKeeper[Query-1]<<" ";}
            else 
            {sum+=XORKeeper[j-1]^XORKeeper[Query-1+j]; cout<<sum<< " ";}
        }
        cout<<sum<<endl;

    }
    return 0;
}