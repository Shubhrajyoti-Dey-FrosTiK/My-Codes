#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double Height,Area,Rate,val=0,time=0,count=1;
    int n;
    cin>>Height>>Area>>Rate>>n;
    long double Arr[n];
    Arr[0]=0;
    for(int i=1;i<n;i++)
    {
        cin>>val; //val-=Arr[i-1]; 
        if(val<Height){Arr[i]=val; count++;}
    }
    for(int i=count;i>0;i--)
    {
        time+=((Height-Arr[i-1])*Area)/(i*Rate);
        Height=Arr[i-1];
    }
    cout<<fixed << showpoint;
    cout<<setprecision(3);
    cout<<time;
    return 0;
}