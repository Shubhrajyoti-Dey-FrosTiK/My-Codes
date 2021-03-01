#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCases;
    cin>>TestCases;
    int i,j,n,k,x,y,count,xi,yi;
    int flag=1;
    for(i=0;i<TestCases;i++)
    {
        int X[4],Y[4];
        flag=1;
        cin>>n>>k>>x>>y;
        if(n<=0){x*=-1; y*=-1; n*=-1; flag=0;}
        if(x==y)
        { 
            if(x<0){ cout<<"0 0"<<endl; }
            else{cout<<n<<" "<<n<<endl; }        
        }    
        else
        {
            if(x>y)
            { 
                Y[0]=n-x+y;  X[0]=n;
                Y[1]=n;      X[1]=Y[0];
                Y[2]=n-X[1]; X[2]=0;
                Y[3]=0;      X[3]=Y[2];
            }    
            else
            {
                X[0]=n-y+x;  Y[0]=n;
                 X[1]=n;      Y[1]=X[0];
                X[2]=n-Y[1]; Y[2]=0;
                X[3]=0;      Y[3]=X[2];
            }                  
            k=(k-1)%4;
            if(!flag)
            {cout<<(n-X[k])*(-1)<<" "<<(n-Y[k])*(-1)<<endl;}
            else{cout<<X[k]<<" "<<Y[k]<<endl;}           
        }         
    }
    return 0;
}