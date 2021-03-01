#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    string Time;
    getline(cin,Time);
    int hour=((int)Time[0]-48)*10+((int)Time[1]-48);
        int min=((int)Time[3]-48)*10+((int)Time[4]-48);
        if(hour==12&&Time[6]=='A'){hour=0;}
        if(Time[6]=='P'&&hour!=12){hour+=12;}

    cout<<hour<<":"<<min;
    return 0;
}