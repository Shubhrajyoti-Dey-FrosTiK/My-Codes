#include<bits/stdc++.h>
#include<unordered_map>
using namespace std; 
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector <ll> vll;
typedef unordered_map <ll,ll> mll;
typedef unordered_map <ll,string> mls;
typedef unordered_map <string,ll> msl;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int Arr[10]={0};
    Arr[3]=9;
    // cout<<Arr[3];
    // Arr[0] --> base adress 
    //sizeof(Arr) --> the totral no of elements i the array * the memory size of the datatype
    sort(Arr,Arr+10);
    for(int i=0;i<10;i++){cout<<Arr[i]<<" ";}


    //Vector
    vector <int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    // int n; cin>>n; v.push_back(n);
    sort(v.begin(),v.end());
    cout<<v[4];
    cout<<endl<<v.size()<<endl;

    vector <int>::iterator itr;
     v.pop_back();
    v.erase(v.begin()+2);
    for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}
    cout<<endl;

    int m=7;
    itr = find(v.begin(),v.end(),m);
    cout<<endl<<distance(v.begin(),itr)<<endl;
    for(itr = v.begin(); itr!=v.end();itr++){cout<<*itr<<" ";}
    
    return 0;
}