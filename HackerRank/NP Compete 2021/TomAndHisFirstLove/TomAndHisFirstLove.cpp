// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int ll;
// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
//     ll Length,RequiredSum;
//     cin>>Length>>RequiredSum;
//     if((Length*(Length+1))/2<RequiredSum||RequiredSum<Length){cout<<"-1"; return 0;}
//     vector <ll> v,Store;
//     for(ll i=0;i<Length;i++)
//     {Store.push_back(i+1);}
//     ll i=0,n=Length-1;
//     while(RequiredSum-n>0&&Store.size()-i-1>=0)
//     {
        
//         if(RequiredSum-Store[Store.size()-i-1]>=n)
//         {
//             cout<<Store[Store.size()-i-1]<<" "; 
//             RequiredSum-=Store[Store.size()-i-1]; n--;
//             Store.erase(Store.begin()+Store.size()-i-1);
//         }
//         else{i++; }
//         if(RequiredSum+n==0||i>Store.size()-1){break;}
//     }
//     for(ll i=0;i<Store.size();i++)
//     {cout<<Store[i]<<" ";}
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;


int main()
 {
    long long n, sum; 
    cin >> n >> sum;
    long long max = (n * n + n) / 2;

    if (sum > max || sum < n) {
        cout << -1; 
        return 0;
    }

    if (sum == max) {
        while (n) cout << n-- << " ";
        return 0;
    }

    long long i = 1;
    while (sum < max) {
        max -= i; 
        i++;

    }
      
    
    for (long long r = n; r != i; r--) {
        cout << r << " ";
    } 
    cout <<  sum - max + 1 << " ";
    for (long long r = 1; r < i + 1; r++) {
        if(r != sum - max + 1) cout << r << " ";
    }
}