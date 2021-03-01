#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int TestCases; cin>>TestCases;
    for(int i=0;i<TestCases;i++)
    {
        int Num,n;
        cin>>Num;
        n=Num/2021;
        if(Num%2021!=0){n++;}
        if((2021*n)-n<=Num&&2021*n>=Num){cout<<"YES";}
        else{cout<<"NO";}
        cout<<endl;
    }
    return 0;
}