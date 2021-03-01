#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
//     ll NoOfElements,Difference;
//     cin>>NoOfElements>>Difference;
//     ll Store1[NoOfElements],Store2[NoOfElements];
//     for(ll i=0;i<NoOfElements;i++)
//     {cin>>Store1[i]; Store2[i]=Store1[i];}
//     ll time=0;
//     sort(Store1,Store1+NoOfElements);
//     sort(Store2,Store2+NoOfElements,greater<int>());
//     for(ll i=0;i<NoOfElements/2;i++)
//     {
//         if(Store2[i]-Store1[i]>Difference)
//         {time+=(Store2[i]-Store1[i]-Difference)/2; if((Store2[i]-Store1[i])%2>0){time++;}}
//     }

//     // for(int i=0;i<NoOfElements;i++)
//     // {
//     //     sort(Store,Store+NoOfElements);
//     //     if(Store[i]<Store[NoOfElements-1-i]-Difference)
//     //     {
//     //         time+=(Store[NoOfElements-i-1]-Difference-Store[i])/2;
//     //         if((Store[NoOfElements-i-1]-Difference-Store[i])%2==1){time++;}
//     //     }
//     // }

//     cout<<time;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
 
// int a[100005];
 
// int main()
// {
//     int Diff; cin>>Diff;
//     int n;scanf("%d",&n);
//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);
//     sort(a,a+n);
//     long long sum = 0;
//     for(int i=0;i<n;i++)
//         sum+=a[i];
//     int p = sum / n;
//     int n1 = n - sum%n;
//     int ans = 0;
//     for(int i=0;i<n1;i++)
//     {
//         if(p<=a[i]-Diff/2)break;
//         ans+=p-a[i];
//     }
//     for(int i=n1;i<n;i++)
//     {
//         if(a[i]+Diff/2>p)break;
//         ans+=p+1-a[i];
//     }
//     printf("%d\n",ans);
// }

// int main()
// {
//     ll NoOfElements,difference;
//     cin>>NoOfElements>>difference;
//     ll Arr[NoOfElements],avg=0,Count=0;
//     for(ll i=0;i<NoOfElements;i++)
//     {cin>>Arr[i]; avg+=Arr[i];}
//     avg/=NoOfElements;
//     sort(Arr,Arr+NoOfElements);
//     // cout<<avg<<" ";
//     if(difference%2==0)
//     {
//         for(ll i=0;i<NoOfElements;i++)
//         {
//             if(Arr[i]<avg-difference/2){Count+=avg-(difference/2)-Arr[i];}
//             else if(Arr[i]>avg+difference/2){Count=Arr[i]-avg-difference/2;}
//         }
//         if(Count%2==1){Count++;}
//         cout<<Count/2;
//     }
//     else
//     {
//         for(ll i=0;i<NoOfElements;i++)
//         {
//             if(Arr[i]<avg-(difference/2)-1){Count+=avg-(difference/2)-1-Arr[i];}
//             else if(Arr[i]>avg+difference/2){Count=Arr[i]-avg-difference/2;}
//         }
//         if(Count%2==1){Count++;}
//        ll Count2=0;
//        for(ll i=0;i<NoOfElements;i++)
//         {
//             if(Arr[i]<avg-difference/2){Count2+=avg-(difference/2)-Arr[i];}
//             else if(Arr[i]>avg+1+difference/2){Count2=Arr[i]-avg-(difference/2)-1;}
//         }
//         if(Count2%2==1){Count2++;}
//         if(Count>Count2){cout<<Count2;}
//         else{cout<<Count;}
//     }
//     return 0;
// }

// int main()
// {
//     ll NoOfElements,difference;
//     cin>>NoOfElements>>difference;
//     ll Arr[NoOfElements],avg=0,Count=0;
//     for(ll i=0;i<NoOfElements;i++)
//     {cin>>Arr[i]; avg+=Arr[i];}
//     avg/=NoOfElements;
//     sort(Arr,Arr+NoOfElements);
//     // cout<<avg<<" ";
//     if(difference%2==0)
//     {
//         for(ll i=0;i<NoOfElements;i++)
//         {
//             if(Arr[i]<avg-difference/2){Count+=avg-(difference/2)-Arr[i];}
//             else if(Arr[i]>avg+difference/2){Count=Arr[i]-avg-difference/2;}
//         }
//         if(Count%2==1){Count++;}
//         cout<<Count/2;
//     }
//     else
//     {
//         for(ll i=0;i<NoOfElements;i++)
//         {
//             if(Arr[i]<avg-(difference/2)-1){Count+=avg-(difference/2)-1-Arr[i];}
//             else if(Arr[i]>avg+difference/2){Count=Arr[i]-avg-difference/2;}
//         }
//         if(Count%2==1){Count++;}
//        ll Count2=0;
//        for(ll i=0;i<NoOfElements;i++)
//         {
//             if(Arr[i]<avg-difference/2){Count2+=avg-(difference/2)-Arr[i];}
//             else if(Arr[i]>avg+1+difference/2){Count2=Arr[i]-avg-(difference/2)-1;}
//         }
//         if(Count2%2==1){Count2++;}
//         if(Count>Count2){cout<<Count2;}
//         else{cout<<Count;}
//     }
//     return 0;
// }


// int main()
// {
//     ll NoOfElements,difference;
//     cin>>NoOfElements>>difference;
//     ll Arr[NoOfElements],avg=0,Count=0;
//     for(ll i=0;i<NoOfElements;i++)
//     {cin>>Arr[i]; avg+=Arr[i];}
//     avg/=NoOfElements;
//     sort(Arr,Arr+NoOfElements);
//     // cout<<avg<<" ";
//     if(difference%2==0)
//     {
//         for(ll i=0;i<NoOfElements;i++)
//         {
//             if(Arr[i]<avg-difference/2){Count+=avg-(difference/2)-Arr[i];}
//             else if(Arr[i]>avg+difference/2){Count=Arr[i]-avg-difference/2;}
//         }
//         if(Count%2==1){Count++;}
//         cout<<Count/2;
//     }
//     else
//     {
//         for(ll i=0;i<NoOfElements;i++)
//         {
//             if(Arr[i]<avg-(difference/2)-1){Count+=avg-(difference/2)-1-Arr[i];}
//             else if(Arr[i]>avg+difference/2){Count=Arr[i]-avg-difference/2;}
//         }
//         if(Count%2==1){Count++;}
//        ll Count2=0;
//        for(ll i=0;i<NoOfElements;i++)
//         {
//             if(Arr[i]<avg-difference/2){Count2+=avg-(difference/2)-Arr[i];}
//             else if(Arr[i]>avg+1+difference/2){Count2=Arr[i]-avg-(difference/2)-1;}
//         }
//         if(Count2%2==1){Count2++;}
//         if(Count>Count2){cout<<Count2;}
//         else{cout<<Count;}
//     }
//     return 0;
// }

// int main()
// {
//     ll NoOfElements,difference;
//     cin>>NoOfElements>>difference;
//     ll Arr[NoOfElements],avg=0,Count=0;
//     for(ll i=0;i<NoOfElements;i++)
//     {cin>>Arr[i]; avg+=Arr[i];}
//     avg/=NoOfElements;
//     sort(Arr,Arr+NoOfElements);
//     while(1)
//     {
//         if(Arr[NoOfElements-1]-Arr[0]>difference)
//         {
//             Arr[NoOfElements-1]--; Arr[0]++; Count++; 
//             for(ll i=0;i<NoOfElements-1;i++)
//             {if(Arr[i]>Arr[i+1]){swap(Arr[i],Arr[i+1]);}{break;}}
//             for(ll i=NoOfElements-1;i>0;i--)
//             {if(Arr[i]<Arr[i-1]){swap(Arr[i],Arr[i-1]);}else{break;}}
//         }
//     }
//     cout<<Count;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ll i,n,d,c=0;
cin>>n;
ll a[n];
cin>>d;
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
while(1)
{
    if(a[n-1]-a[0]<=d)
    {cout<<c; return 0;}
    c++;
    a[0]++;a[n-1]--;
    for(int i=0; ;i++)
    {
        if(a[i]>a[i+1])
        swap(a[i],a[i+1]);
        else break;
    }
    for(int i=n-1;;i--)
    {
        if(a[i]<a[i-1])
        swap(a[i],a[i-1]);
        else
        break;
    }
}
return 0;
}