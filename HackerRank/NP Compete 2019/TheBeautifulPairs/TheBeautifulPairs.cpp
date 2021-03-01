#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n,TestCases,i,j,count=0,Starting,Ending,odd=0,even=0;
    cin>>n>>TestCases;
    long long int Arr[n],OddNumbers[n],EvenNumbers[n];
    for(i=0;i<n;i++)
    {
        cin>>Arr[i];
         if(Arr[i]%2==0){even++; }
         else{odd++;}
        OddNumbers[i]=odd;
        EvenNumbers[i]=even;
    }
    for(i=0;i<TestCases;i++)
    {
        cin>>Starting>>Ending;
        odd=OddNumbers[Ending-1]-OddNumbers[Starting-1];  
        if(Arr[Starting-1]%2==1){odd++;}
        even=EvenNumbers[Ending-1]-EvenNumbers[Starting-1];
        if(Arr[Starting-1]%2==0){even++;}
        count=odd*even;
        if(even>1){count+=((even-1)*even)/2;}
        cout<<count<<endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int n,TestCases,i,j,k,start,end,count=0;
//     cin>>n>>TestCases;
//     long long int Arr[n];
//     for(i=0;i<n;i++)
//     {cin>>Arr[i];}
//     for(i=0;i<TestCases;i++)
//     {
//         count=0;
//         cin>>start>>end;
//         for(j=start-1;j<end;j++)
//         {
//             for(k=j+1;k<end;k++)
//             {
//                 if((Arr[j]*Arr[k]%2)==0)
//                 {count++;}
//             }
//         }
//         cout<<count<<endl;
//     }
// }
