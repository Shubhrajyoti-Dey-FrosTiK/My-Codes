#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCases;
    cin>>TestCases;
    int Num,ReqHeight,i,j,k,count,sum1,sum2,flag;
    for(i=0;i<TestCases;i++)
    {
        flag=0;
        sum1=0; sum2=0;
        cin>>Num>>ReqHeight;
        int Height[Num];
        for(j=0;j<Num;j++)
        { cin>>Height[j]; }
        sort(Height,Height+sizeof(Height)/sizeof(Height[0]),greater<int>());
        // cout<<Height[3]<<" ";
        for(j=0;j<Num;j++)
        {
            if(sum1>=ReqHeight&&sum2>=ReqHeight)
            {break;} 
            else if(sum1>=ReqHeight)
            {sum2+=Height[j];}
            else if(sum2>=ReqHeight)
            {sum1+=Height[j];}
            else if(sum1<ReqHeight&&j%2==0)
            {sum1+=Height[j];}
            else if(sum2<ReqHeight&&j%2==1)
            {sum2+=Height[j];}

        }
       // cout<<sum1<<" "<<sum2;
        if(j==Num)
        { cout<<"-1"<<endl; }
        else
        { cout<<j<<endl; }   
    }
    return 0;
}