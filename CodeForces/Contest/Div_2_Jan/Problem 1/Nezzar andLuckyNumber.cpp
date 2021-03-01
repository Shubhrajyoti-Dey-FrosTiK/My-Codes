#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    long long int TestCase,i,j,k,NoOfElements,LuckyNum,Num;
    cin>>TestCase;
    for(i=0;i<TestCase;i++)
    {
        cin>>NoOfElements>>LuckyNum;
        for(j=0;j<NoOfElements;j++)
        {
            cin>>Num;
            if(Num>=10*LuckyNum){cout<<"YES"<<endl;}
            else{
                int flag=0;
                while(Num>0)
                {
                    Num-=LuckyNum;
                    if(Num%10==0){cout<<"YES"<<endl; flag=1; break;}
                }
                if(!flag){cout<<"NO"<<endl;}
            }
        }
    6
    return 0;
}