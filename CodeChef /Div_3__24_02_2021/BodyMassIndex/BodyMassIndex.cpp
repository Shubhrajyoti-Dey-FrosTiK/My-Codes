#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll TestCases;
    cin>>TestCases;
    while(TestCases--)
    {
        float mass,height;
        cin>>mass>>height;
        float BMI=mass/(height*height);
        if(BMI<=18){cout<<"1";}
        else if(BMI>=19&&BMI<=24){cout<<"2";}
        else if(BMI>=25&&BMI<=29){cout<<"3";}
        else if(BMI>=30){cout<<"4";}
        cout<<endl;
    }
    return 0;
}