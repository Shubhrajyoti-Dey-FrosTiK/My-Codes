#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void Sieve(ll limit, vector<ll>& prime)
{
	bool mark[limit + 1];
	memset(mark, false, sizeof(mark));

	for (ll i = 2; i*i <= limit; ++i) 
	{
		if (mark[i] == false) 
		{
			// If not marked yet, then its a prime
			prime.push_back(i);
			for (ll j = i; j <= limit; j += i)
				mark[j] = true;
		}
	} 
}

void primes(ll low, ll high, vector <ll> &v)
{
	
	ll limit = floor(sqrt(high)) + 1;
	vector<ll> prime;

	Sieve(limit, prime);
	ll n = high - low + 1;
	bool mark[n + 1];
	memset(mark, false, sizeof(mark));

	for (ll i = 0; i < prime.size(); i++) 
	{
	    ll loLim = floor(low / prime[i]) * prime[i];
		if (loLim < low)
			loLim += prime[i];
		if(loLim==prime[i])
			loLim += prime[i];
		
		for (ll j = loLim; j <= high; j += prime[i])
			mark[j - low] = true;
	}
	for (ll i = low; i <= high; i++)
		if (!mark[i - low])
			v.push_back(i);
}

// Driver Code
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	ll low = 2, high = 1000000;
    vector <ll> PrimeStore;
    PrimeStore.push_back(0);
	primes(low, high,PrimeStore);
    // for(ll i=0;i<PrimeStore.size();i++)
    // {cout<<PrimeStore[i]<<" ";}
    ll TestCases;
    cin>>TestCases;
    for(ll i=0;i<TestCases;i++)
    {
        ll x,y;
        cin>>x>>y;
        if(x>PrimeStore[y])
        {cout<<"Divyam";}
        else{cout<<"Chef";}
        cout<<endl;
    }
	return 0;
}

