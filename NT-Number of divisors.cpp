///ARO EFFICIENT EKTA ALGO ASA DEKTE HBE GFG THEKE

#include<bits/stdc++.h>
using namespace std;

vector<bool> flag(1000000, true);
vector<long long > primes;

void sieve()
{
    flag[0] = false;
    flag[1] = false;

    for(long long  i = 2; i*i < 1000000; i++)
        if(flag[i])
            for(long long  j = 2; i*j < 1000000; j++)
                flag[i*j] = false;


    primes.push_back(2);
    for(long long i = 3; i < 1000000; i += 2)
        if(flag[i])
            primes.push_back(i);

}

long long countDivisor(long long n)
{
    long long divisor = 1;
    long long p=primes.size();
    for (long long i = 0; primes[i]*primes[i] <=n && i<p ; i++)
    {
        if (n % primes[i] == 0)
        {
            long long cnt = 1;
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                cnt++;
            }
            divisor *= cnt;
        }
    }
    if(n>1)
        divisor*=2;
    return divisor;
}

int main()
{
    sieve();
    countDivisor(n);
 
    return 0;
}