///PROBLEM LINK:https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3194
///VIDEO REF:https://www.youtube.com/watch?v=x9KMLQa6G5w

#include <bits/stdc++.h>
#define MAX 32000

using namespace std;

using ll = long long;

vector<long long> primes;

void sieve()
{
    bool isPrime[MAX];

    for (long long i = 0; i < MAX; ++i)
        isPrime[i] = true;

    for (long long i = 3; i * i <= MAX; i += 2)
    {
        if (isPrime[i])
        {
            for (long long j = i * i; j <= MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    primes.push_back(2);

    for (long long i = 3; i < MAX; i += 2)
    {
        if (isPrime[i]) primes.push_back(i);
    }
}

void segSieve (ll l, ll r)
{
    bool isPrime[r-l+1];
   
    for (long long i = 0; i < r - l + 1; ++i)
        isPrime[i] = true;
   
    if (l == 1) isPrime[0] = false;
   
    for (long long i = 0; primes[i]*primes[i] <= r; ++i)
    {
        long long currentPrime = primes[i];
        
        ll base = (l/currentPrime)*currentPrime;
        
        if (base < l) 
        base += currentPrime;
        
        for (ll j = base; j <= r; j += currentPrime)
        {
            isPrime[j-l] = false;
        }
        
        if (base == currentPrime) 
            isPrime[base-l] = true;
    
    }
    
    for (long long i = 0; i < r - l + 1; ++i)
    {
        if (isPrime[i]) 
            cout << (i+l) << endl;
    }
    
    puts("");
    
}

int main()
{
    sieve();
    
    long long t;
    cin >> t;
   
    while (t--)
    {
        
        ll l, r;
        cin >> l >> r;
        segSieve(l, r);
    }


    return 0;

}

