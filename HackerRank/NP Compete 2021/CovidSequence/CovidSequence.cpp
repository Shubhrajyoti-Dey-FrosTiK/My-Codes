#include <bits/stdc++.h>
using namespace std;

long long covidsum= 1000000000+7;

long long covidfunction(long long A, long long B)
{
    long long temporary = 1;
    while (B > 0) {
            if(B % 2) {
               temporary = (temporary * A) % covidnum;
        }
            A = (A * A) % covidnum;
            B = B / 2;
    }
    return temporary;
}


int main() {
    long long output=0,temp,A,B,C;
    int n,k,num,max=1,min=1000000; cin>>n>>k;   
    map<int,int> m,pr;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        max=max<num?num:max;
        min=min>num?num:min;
        m[num]++;
    }
    
    map<int,int>::iterator x=m.begin(),y;
    pr[x->first]=x->second; x++; y=pr.begin();
    for(;x!=m.end();x++,y++)
    {
        pr[x->first]= (x->second) + (y->second);
    }
    
    int i=min;
    while(i+k<=max)
    {
        
        if(m[i]==0 || m[i+k]==0)
        {
            i++;
            continue;
        }
        int t=pr[i+k]-pr[i]-m[i+k];
        A=covidfunction(2,m[i]);
        B=covidfunction(2,t);
        C=covidfunction(2,m[i+k]);
       
        temp=(((A-1)%covidnum)(B%covidnum)((C-1)%covidnum))%covidnum; 
        output=((output%covidnum)+(temp%covidnum))%covidnum;
        i++;
    }
    cout<<output%covidnum;
    return 0;
}