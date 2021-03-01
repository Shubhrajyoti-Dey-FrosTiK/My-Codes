#include<iostream>
using namespace std;
int swap(int &a,int &b){
    int var=a;
    a=b;
    b=var;
}
int main(){
    int a,b;
    cout<<"enter 2 numbers\n";
    cin>>a;
    cin>>b;
    cout<<"value of a is "<<a<<" and b is "<<b<<"\n";
    swap(a,b);
    cout<<"value of a is "<<a<<" and b is "<<b;
}