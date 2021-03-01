#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int arr1[m],arr2[n];
    for(int i=0;i<m;i++)
    { cin>>arr1[i]; }
    for(int i=0;i<n;i++)
    { cin>>arr2[i]; }
    int arr[n+m];
    int val1=0,val2=0;
    for(int i=0;i<m+n;i++)
    {
        if(val1==m)
        { arr[i]=arr2[val2]; val2++; continue;}
        if(val2==n)
        { arr[i]=arr1[val1]; val1++; continue;}
        if(arr1[val1]<arr2[val2])
        {
            arr[i]=arr1[val1];
            val1++;
        }
        else
        {
            arr[i]=arr2[val2];
            val2++;
        }    
    }
    for(int i=0;i<m+n;i++)
    { cout<<arr[i]<<" "; }
    return 0;
}