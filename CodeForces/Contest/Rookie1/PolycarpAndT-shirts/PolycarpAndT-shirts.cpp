#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int NoOfShirts,NoOfBuyers,n,i,j;
    cin>>NoOfShirts;
    vector <long long int> Price,FrontColor,BackColor;
    long long int Choice1=0,Choice2=0,Choice3=0;
    // long long int ReqChoice1=0,ReqChoice2=0,ReqChoice3=0;
    //vector <long long int> Index1,Index2,Index3;
    for(i=0;i<NoOfShirts;i++)
    {cin>>n; Price.push_back(n);}
    for(i=0;i<NoOfShirts;i++)
    {cin>>n; FrontColor.push_back(n);}
    for(i=0;i<NoOfShirts;i++)
    {cin>>n; BackColor.push_back(n);}
    // for(int i=0;i<Index1.size();i++){cout<<Index1[i]<<" ";} cout<<Choice1<< " "<<Choice2<<" "<<Choice3;
    // vector <long long int> Price1,Price2,Price3;
    // for(i=0;i<Index1.size();i++){Price1.push_back(Price[Index1[i]]);} sort(Price1.begin(),Price1.end());
    // for(i=0;i<Index2.size();i++){Price2.push_back(Price[Index1[i]]);} sort(Price2.begin(),Price2.end());
    // for(i=0;i<Index3.size();i++){Price3.push_back(Price[Index1[i]]);} sort(Price3.begin(),Price3.end());
    cin>>NoOfBuyers;
    long long int BuyersChoice,Index=0,MinPrice,flag=0;
    for(i=0;i<NoOfBuyers;i++)
    {
        flag=0; Index=0; MinPrice=-1;
        cin>>BuyersChoice;
        for(j=0;j<Price.size();j++)
        {
            if(FrontColor[j]==BuyersChoice||BackColor[j]==BuyersChoice)
            { 
                // cout<<j<<endl;
                flag=1;
                if(MinPrice==-1){MinPrice=Price[j]; Index=j;}
                else if(MinPrice>Price[j]){MinPrice=Price[j]; Index=j;}
            }
        }
        // cout<<Index;
        if(flag)
        {
            cout<<MinPrice<<" ";
            Price.erase(Price.begin()+Index); FrontColor.erase(FrontColor.begin()+Index); BackColor.erase(BackColor.begin()+Index);
        }
        else{cout<<"-1 ";}
    }
    // for(i=0;i<NoOfBuyers;i++)
    // {
    //     cin>>BuyersChoice;
    //     if(BuyersChoice==1&&ReqChoice1<=Choice1){cout<<Price1.at(ReqChoice1); ReqChoice1++;}
    //     else if(BuyersChoice==2&&ReqChoice2<=Choice2){cout<<Price2.at(ReqChoice2); ReqChoice2++;}
    //     else if(BuyersChoice==3&&ReqChoice3<=Choice3){cout<<Price3.at(ReqChoice3); ReqChoice3++;}
    //     else{cout<<"-1";}
    //     cout<<endl;
    // }
    return 0;
}