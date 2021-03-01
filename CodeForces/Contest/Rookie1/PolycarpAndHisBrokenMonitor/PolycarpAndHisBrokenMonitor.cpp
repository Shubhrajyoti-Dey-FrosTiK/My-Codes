#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCases,Length,Breadth,x,y,Area1,Area2;
    cin>>TestCases;
    for(int i=0;i<TestCases;i++)
    {
        cin>>Length>>Breadth>>x>>y; x++;y++;
        if(Length-x>=x-1){Area1=(Length-x)*Breadth;}
        else{Area1=(x-1)*Breadth;}
        if(Breadth-y>=y-1){Area2=Length*(Breadth-y);}
        else{Area2=Length*(y-1);}
        cout<<max(Area1,Area2)<<endl;
    }
    return 0;
}