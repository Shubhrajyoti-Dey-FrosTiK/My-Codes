#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases,p,a,b,c;
    cin>>TestCases;
    while(TestCases--)
    {
        cin>>p>>a>>b>>c;
        ll time1,time2,time3;
        time1=p/a; if(p%a!=0){time1++;} time1*=a; time1-=p;
        time2=p/b; if(p%b!=0){time2++;} time2*=b; time2-=p;
        time3=p/c; if(p%c!=0){time3++;} time3*=c; time3-=p;
        ll min=time1;
        if(time2<min){min=time2;}
        if(time3<min){min=time3;}
        cout<<min<<endl;
    }
    return 0;
}