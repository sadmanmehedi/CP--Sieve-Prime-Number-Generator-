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

///NOT EFFICIENT ALGO

int divisorSum1(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            cnt += i;
        } else if (n % i == 0) {
            cnt += (i + n/i);
        }
    }
    return cnt;
}

///EFFICIENT ALGO

int divisorSum2(int n)
{
    if (n < 1) return 0;
    int sum = 1;
    for (int i = 0; primes[i]*primes[i] <= n; i++)
    {
        if (n % primes[i] == 0)
        {
            int cnt = 1;
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                cnt++;
            }
            sum *= (powl(primes[i], cnt) - 1) / (primes[i] - 1);
        }
    }
    if (n > 1) sum *= (powl(n, 2) - 1) / (n - 1);
    /*
     * this is just a formula of a series (1 + p + p^2 + ... + p^n)
     * = ((p^(n+1)) - 1)/(p-1)
     */
    return sum;
}

int main()
{
    sieve();
    
}
