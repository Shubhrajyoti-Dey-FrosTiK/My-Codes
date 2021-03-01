// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int Length; cin>>Length;
//     int count=0,flag=0,pos;
//     char C1[Length],C2[Length];
//     cin>>C1>>C2;
//     vector<char> Term1,Term2;
//     for(int i=0;i<Length;i++)
//     {Term1.push_back(C1[i]); Term2.push_back(C2[i]);}
//     //cout<<Term1.at(1);
//     for(int i=0;i<Length;i++)
//     {
//         flag=0;
//         for(int j=i;j<Length;j++)
//         {
//             if(Term2.at(i)==Term1.at(j))
//             {pos=j; flag=1; break;}
//         }
//         if (flag==1) 
//         { 
//             count+=pos-i;
//             Term1.erase(Term1.begin()+pos);
//             Term1.insert(Term1.begin()+i,Term2.at(i));
//         } 
//         else
//         {cout<<"-1"; flag=0; break;}
//     }
//     if(flag){ cout<<count; }
//     return 0;
// }

//Methord 2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int Length;
    cin>>Length;
    string s1,s2;
    cin>>s1>>s2;
    int flag=1;
    long long int IsPresent[26]={0},Difference[26]={0},Index[Length];
    for(long long int i=0;i<Length;i++)
    {IsPresent[((int)toupper(s1[i]))-65]++; }
    for(long long int i=0;i<Length;i++)
    {IsPresent[((int)toupper(s2[i]))-65]++;}
    if(flag)
    {
        for(long long int i=0;i<Length;i++)
        {
            auto itr = find(s1, s2 + (sizeof(s1)/sizeof(s1[0])), s2[i]);
            int pos=distance(s1, itr);
        }
    }
    return 0;
}