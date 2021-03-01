#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int TestCases;
    cin>>TestCases;
    unsigned long long int i,c,num1,num2,found,n=1;
    for(i=0;i<TestCases;i++)
    {
        found=0; n=1;
        cin>>num1>>num2;
        while(found!=1)
        {
            if(num1%n==0&&(num1/n)%num2!=0)
            {cout<<num1/n; found=1; break;}
            n++;
        }
        cout<<endl;
    }
    return 0;
}