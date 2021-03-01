#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

  
// void leastPrimeFactor(ll n,ll m,ll num) 
// { 
//     // Create a vector to store least primes. 
//     // Initialize all entries as 0. 
//     vector<int> least_prime(m-n+1, 0); 
  
//     // We need to print 1 for 1. 
//     // least_prime[1] = 1; 
  
//     for (int i = n; i <= m; i++) 
//     { 
//         // least_prime[i] == 0 
//         // means it i is prime 
//         if (least_prime[i-n] == 0) 
//         { 
//             // marking the prime number 
//             // as its own lpf 
//             least_prime[i-n] = i; 
  
//             // mark it as a divisor for all its 
//             // multiples if not already marked 
//             for (int j = i*i; j <= n; j += i) 
//                 if (least_prime[j-n] == 0) 
//                    least_prime[j-n] = i; 
//         } 
//     } 
  
//     // print least prime factor of 
//     // of numbers till n 
//     for (int i = 1; i <= n; i++) 
//         cout << "Least Prime factor of "
//              << i << ": " << least_prime[i] << "\n"; 
// } 
  
// ll smallestDivisor(ll n) 
// { 
//     // if divisible by 2 
//     if (n % 2 == 0) 
//         return 2; 
  
//     // iterate from 3 to sqrt(n) 
//     for (ll i = 3; i * i <= n; i += 2) { 
//         if (n % i == 0) 
//             { return i;} 
//     } 
//     return n; 
// } 

// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
//     ll TestCases;
//     cin>>TestCases;
//     vector <ll> smallest(1000001,1);
//     smallest[0]=1;
//     for(ll i=2;i<=1000000;i++)
//     {smallest[i]=smallestDivisor(i);}
//     for(ll i=0;i<TestCases;i++)
//     {
//         ll Left,Right,Num,Count=0,n;
//         cin>>Num>>Left>>Right;
//         n=Left/Num;
//         // leastPrimeFactor(Left,Right,Num);
//         if(Left%Num>0){n++;}
//         // if(Num==2){for(ll j=n*Num;j<=Right;j=j+2){Count++;}cout<<Count; return 0;}
//         // if(n%2==0){n++;}
//         // while(n*Num<=Right)
//         // {
//         //     // ll val=1,flag=1;
//         //     // for(ll j=2;j<Num;j++)
//         //     // {if((n*Num)%j==0){flag=0; break;}}
//         //     // if(flag==1){Count++;}
//         //     // n=n+2;

//         // }
//         if(Num==2)
//         // {for(ll j=n*Num;j<=Left;j=j+2){Count++;} cout<<Count; break}
//         {cout<<(Right/2)-n+1; return 0;}
//         for(ll j=n;j*Num<=Right;j++)
//         {if(smallest[j*Num]>=Num){Count++;}}
//         cout<<Count<<endl;
//     }
//     return 0;
// }


const int m = 1e6 + 1;

vector<ll> Store[m];
vector<bool> isprime(m, 1);
void sieve() 
{
	isprime[0]= 0;
	isprime[1] = 0;
	for (int i=2; i*i<m; i++)
	{
		if (isprime[i] == 1) {
			Store[i].push_back(i);
			for (int j=i*i;j<m;j+=i) 
			{
				if (isprime[j] == 1) Store[i].push_back(j);
				isprime[j] = 0;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    sieve();
    int TestCases;
	cin>>TestCases;
	for(int i=0;i<TestCases;i++)
	{
		std::vector<ll>::iterator low,up;
		int Num,Left,Right;
		cin>>Num>>Left>>Right;
		low=lower_bound(Store[Num].begin(),Store[Num].end(),Left);
		up=upper_bound(Store[Num].begin(),Store[Num].end(),Right);
		cout<<up-low<<endl;
	}
    return 0;
}