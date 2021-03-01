#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int NoOfElements,DummyVar;
    vector <int> Store,StoreEven,StoreOdd;
    cin>>NoOfElements;
    for(int i=0;i<NoOfElements;i++)
    {cin>>DummyVar; Store.push_back(DummyVar); if(i%2==0){StoreOdd.push_back(DummyVar);}else{StoreEven.push_back(DummyVar);}}
    sort(Store.begin(),Store.end());
    sort(StoreOdd.begin(),StoreOdd.end());
    sort(StoreEven.begin(),StoreEven.end());
    cout<<"Yes"<<endl;
    int ieven=0,iodd=0;
    for(int i=0;i<NoOfElements;i=i+1)
    {
        if(i%2==0)
        {
            if(StoreOdd[iodd]!=Store[i]){cout<<"No"; return 0;}
            iodd++;
        }
        else 
        {
            if(StoreEven[ieven]!=Store[i]){cout<<"No"; return 0;}
            ieven++;
        }
    }
    cout<<"Yes";
    return 0;
}