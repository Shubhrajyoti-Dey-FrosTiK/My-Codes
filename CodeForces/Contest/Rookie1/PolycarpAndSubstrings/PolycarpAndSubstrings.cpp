#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int NoOfStrings,i;
    cin>>NoOfStrings;
    string s[NoOfStrings];
    int MaxLength=0,MaxIndex,LengthKeeper[NoOfStrings];
    for(i=0;i<NoOfStrings;i++)
    {
        cin>>s[i];
        LengthKeeper[i]=s[i].length();
        if(i==0){MaxLength=0; MaxIndex=0;}
        else if(s[i].length()>MaxLength){MaxIndex=i;MaxLength=s[i].length();} 
    }
    if(NoOfStrings==1){cout<<"YES\n"<<s[0]; return 0;}
    sort(LengthKeeper,LengthKeeper+sizeof(LengthKeeper)/sizeof(LengthKeeper[0]));
    vector <int> CountKeeper(MaxLength),IndexKeeper(MaxLength+1),Resultant(MaxLength+1);
    fill(CountKeeper.begin(),CountKeeper.end(),0);
    fill(IndexKeeper.begin(),IndexKeeper.end(),0);
    for(i=0;i<NoOfStrings;i++)
    {CountKeeper[s[i].length()-1]++; IndexKeeper[s[i].length()-1]=i;}
    for(i=0;i<NoOfStrings;i++)
    { 
        for(int j=0;j<NoOfStrings;j++)
        {
            if(s[i].length()>=s[j].length()&&(s[i].find(s[j])==string::npos))
            {cout<<"NO"; return 0;}
        }
    }
    cout<<"YES"<<endl;
    for(i=0;i<NoOfStrings;i++)
    {
        cout<<s[IndexKeeper[LengthKeeper[i]-1]]<<endl;
            //if(i==NoOfStrings-1){return 0;}
    }
    return 0;
}