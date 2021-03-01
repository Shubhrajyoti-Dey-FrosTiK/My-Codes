// #include<iostream>
// using namespace std;

// int main()
// {
//     int TestCases;
//     cin>>TestCases;
//     int n[TestCases],m[TestCases];
//     int Arr1[TestCases][1000],Arr2[TestCases][1000],Arr1Votes[TestCases],Arr2Votes[TestCases];
//     int max2[TestCases],min1[TestCases],MinIndex1[TestCases],MaxIndex2[TestCases];
//     for(int i=0;i<TestCases;i++)
//     { 
//         cin>>n[i]>>m[i];
//         Arr1Votes[i]=0;
//         Arr2Votes[i]=0;
//         MinIndex1[i]=0;
//         MaxIndex2[i]=0;
//         for(int j=0;j<n[i];j++)
//         { 
//             cin>>Arr1[i][j]; Arr1Votes[i]+=Arr1[i][j]; 
//             if(j==0){ min1[i]=Arr1[i][j]; }
//             if(Arr1[i][j]<=min1[i])
//             { min1[i]=Arr1[i][j]; MinIndex1[i]=j; }       
//         }
//         for(int j=0;j<m[i];j++)
//         { 
//             cin>>Arr2[i][j]; Arr2Votes[i]+=Arr2[i][j]; 
//             if(j==0){ max2[i]=Arr2[i][j]; }
//             if(Arr2[i][j]>=max2[i])
//             { max2[i]=Arr2[i][j]; MaxIndex2[i]=j; }
//         }
//     }
//     int count=0,swap,min,max;
//     for(int i=0;i<TestCases;i++)
//     {
//         count=0;
//         while (Arr1Votes[i]<Arr2Votes[i])
//         {
//             Arr1Votes[i]=(Arr1Votes[i]-min1[i])+max2[i];
//             Arr2Votes[i]=(Arr2Votes[i]-max2[i])+min1[i];
//             swap=Arr1[i][MinIndex1[i]]; Arr1[i][MinIndex1[i]]=Arr2[i][MaxIndex2[i]]; Arr2[i][MaxIndex2[i]]=swap;
//             count++;
//             min=Arr1[i][0];
//             for(int j=0;j<n[i];j++)
//             {
//                 if(min>=Arr1[i][j])
//                 { min=Arr1[i][j]; MinIndex1[i]=i; }
//             }
//             max=Arr2[i][0];
//             for(int j=0;j<m[i];j++)
//             {
//                 if(max<=Arr2[i][j])
//                 { max=Arr2[i][j]; MaxIndex2[i]=i; }
//             }
//             min1[i]=min; max2[i]=max;
//         }
//         cout<<count<<endl;
//     } 
//     return 0;
// } 


// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     long long int TestCases;
//     cin>>TestCases;
//     long long int n[TestCases],m[TestCases];    
//     long long int Arr1[TestCases][1000],Arr2[TestCases][1000];
//     long long int Arr1Votes[TestCases],Arr2Votes[TestCases];
//     long long int i,j,asize;
//     for(i=0;i<TestCases;i++)
//     {
//         Arr1Votes[i]=0;
//         Arr2Votes[i]=0;
//         cin>>n[i]>>m[i];
//         for(j=0;j<n[i];j++)
//         { cin>>Arr1[i][j]; Arr1Votes[i]+=Arr1[i][j]; }
//         sort(Arr1[i],Arr1[i] + n[i]);
//         for(j=0;j<m[i];j++)
//         { cin>>Arr2[i][j]; Arr2Votes[i]+=Arr2[i][j]; }
//         sort(Arr2[i],Arr2[i] + m[i],greater<int>());
//     }
//     int count;
//     for(i=0;i<TestCases;i++)
//     {
//         count=0; j=0;
//         while (Arr1Votes[i]<Arr2Votes[i])
//         {
//             Arr1Votes[i]=Arr1Votes[i]-Arr1[i][j]+Arr2[i][j];
//             Arr2Votes[i]=Arr2Votes[i]-Arr2[i][j]+Arr1[i][j];
//             j++; count++;
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
// #include<algorithm>
using namespace std;

int main()
{
    unsigned long long int TestCases;
    cin>>TestCases;
    unsigned long long int n1,n2,i,j,count=0;
    for(i=0;i<TestCases;i++)
    {
        cin>>n1>>n2;
        unsigned long long int Arr1[n1],Arr2[n2],sum1=0,sum2=0;
        for(j=0;j<n1;j++)
        { cin>>Arr1[j]; sum1+=Arr1[j]; }
        sort(Arr1,Arr1+sizeof(Arr1)/sizeof(Arr1[0]));
        for(j=0;j<n2;j++)
        { cin>>Arr2[j]; sum2+=Arr2[j]; }
        sort(Arr2,Arr2+sizeof(Arr2)/sizeof(Arr2[0]),greater<int>());
        j=0; count=0;
        while(sum1<=sum2)
        {           
            
            sum1=sum1+(Arr2[j]-Arr1[j]);
            sum2=sum2-(Arr2[j]-Arr1[j]);
            // cout<<sum1<<" "<<sum2<<" ";
            swap(Arr1[j],Arr2[j]);
            count++; j++;
        }
        cout<<count<<endl;
    }
    return 0;
}
