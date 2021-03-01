#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
int main()
{
    ll Cost,IniTialAmount,RequiredBananas;
    cin>>Cost>>IniTialAmount>>RequiredBananas;
    ll ReqAmount;
    ReqAmount=Cost*((RequiredBananas*(RequiredBananas+1))/2);
    if(IniTialAmount>=ReqAmount){cout<<"0";}
    else{cout<<ReqAmount-IniTialAmount;}
    return 0;
}