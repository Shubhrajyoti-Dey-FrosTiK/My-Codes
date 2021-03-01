#include<bits/stdc++.h>
using namespace std;
unsigned long long int a,b;
void PolycarpAndWeirdSubtractionProcess(unsigned long long int &,unsigned long long int &b)
{
    // cout<<a<<" "<<b<<endl;
    if((a!=0)&&(b!=0))
    {
        if(a>=2*b){a=a-(2*b)*(((a-2*b)/(2*b))+1); PolycarpAndWeirdSubtractionProcess(a,b);}
        else if(b>=2*a){b=b-(2*a)*(((b-2*a)/(2*b))+1); PolycarpAndWeirdSubtractionProcess(a,b);}
    }
}
int main()
{
    cin>>a>>b;
    PolycarpAndWeirdSubtractionProcess(a,b);
    cout<<a<<" "<<b;
    return 0;
}