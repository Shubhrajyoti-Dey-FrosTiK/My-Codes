#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void StrangeList(ll ELementStore[],ll Element,int NoOfElements,ll Resultant[],ll Sum)
{
    int flag=1;
    for(int i=0;i<NoOfElements;i++)
    {
        if(Resultant[i]%Element!=0){flag=0;}
        else if(Resultant[i]%Element==0&&flag==1)
        {Sum+=ELementStore[i];}
        Resultant[i]=Resultant[i]/Element;
    }
    if(flag==1)
    {StrangeList(ELementStore,Element,NoOfElements,Resultant,Sum);}
    else{cout<<Sum<<endl;}
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int TestCases;
    cin>>TestCases;
    int NoOfElements; ll Element;
    ll ElementStore;
    for(int i=0;i<TestCases;i++)
    {
        cin>>NoOfElements>>Element;
        ll Sum=0,ElementStore[NoOfElements],Resultant[NoOfElements];
        for(ll j=0;j<NoOfElements;j++)
        {cin>>ElementStore[j];Sum+=ElementStore[j];Resultant[j]=ElementStore[j];}
        StrangeList(ElementStore,Element,NoOfElements,Resultant,Sum);
    }
    return 0;
}