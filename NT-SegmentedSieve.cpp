#include <bits/stdc++.h>
using namespace std;

using ll = long long;
vector<bool> flag(1000000, true);
vector<int> primes;

void sieve()
 {
	flag[0] = false;
	flag[1] = false;

	for(int i = 2; i*i < 1000000; i++)
		if(flag[i])
			for(int j = 2; i*j < 1000000; j++)
				flag[i*j] = false;


	primes.push_back(2);
	for(int i = 3; i < 1000000; i += 2)
		if(flag[i])
			primes.push_back(i);

}

void segSieve (ll l, ll r)
{
    bool isPrime[r-l+1];
    
    for (int i = 0; i < r - l + 1; ++i)
    {
        isPrime[i] = true;
        
    }
    if (l == 1)
        isPrime[0] = false;
    
    for (long long i = 0; primes[i]*primes[i] <= r; i++)
    {
        long long currentPrime = primes[i];
        
        ll base = (l/currentPrime)*currentPrime;
        
        if (base < l) base += currentPrime;
        
        for (ll j = base; j <= r; j += currentPrime)
        {
            isPrime[j-l] = false;
        }
      
       if (base == currentPrime) 
        isPrime[base-l] = true;
    
    }
    
    for (int i = 0; i < r - l + 1; ++i)
    {
        if (isPrime[i]) 
        cout << (i+l) << endl;
   
    }
    
    puts("");

}

int main() {

    sieve();
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        segSieve(l, r);
    }


    return 0;
}
