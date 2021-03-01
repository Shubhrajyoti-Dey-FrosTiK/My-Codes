// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int ll;
// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
//     ll SizeOfString;
//     cin>>SizeOfString;
//     string s,substring="GPL",s1="GPL";
//     cin>>s;
//     // while(1)
//     // {
//     //     ll i=0;
//     //     size_t index=s.find(substring);
//     //     if(index!=string::npos)
//     //     {
//     //         string str1=s.substr(0,index);
//     //         string str2=s.substr(index+3,s.length());
//     //         s.clear();
//     //         s=str1+str2;
//     //     }
//     //     else {break;} 
//     // }

    
//     // while(1)
//     // {
//     //     size_t index=s.find(s1);
//     //     if(index!=string::npos)
//     //     {s.replace(s.find(s1),s1.length(),""); size_t index=s.find(s1);}
//     //     else{break;}
//     // }

//     while(1)
//     {
//         size_t index=s.find(s1);
//         if(index!=string::npos)
//         {s.replace(index,s1.length(),"");}
//         else{break;}
//     }

//     // while(1)
//     // {
//     //     for(ll i=0;i<s.length()-3;i++)
//     //     {
//     //         if
//     //     }
//     //     if(index!=string::npos)
//     //     {
//     //         string str1=s.substr(0,index);
//     //         string str2=s.substr(index+3,s.length());
//     //         s.clear();
//     //         s=str1+str2;
//     //     }
//     //     else {break;} 
//     // }
//     cout<<s;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    string sr;
    cin>>sr;
    string t = "";
    for(int i = 0 ; i<num ; i++)
    {
        t+=sr[i];
        while(t.size()>=3 && t.substr(t.size()-3, 3)=="GPL")
        {
            t=t.substr(0 , t.size()-3);
        }
    }
    cout<<t<<endl;
}