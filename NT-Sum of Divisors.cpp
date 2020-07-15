///PROBLEM LINK:https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3194
///VIDEO REF:https://www.youtube.com/watch?v=x9KMLQa6G5w

#include<bits/stdc++.h>
using namespace std;

vector<bool> flag(10000000, true);
vector<long long> primes;

void sieve()
{
    flag[0] = false;
    flag[1] = false;

    for(long long i = 3; i*i < 10000000; i+=2)
        {
            if(flag[i])
            {
                for(long long j = i; i*j < 10000000; j++)
                {
                    flag[i*j] = false;
                }
            }
        }


    primes.push_back(2);
    for(long long i = 3; i < 10000000; i += 2)
        {
            if(flag[i])
            {
                primes.push_back(i);
            }
        }

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

long long  divisorSum2(long long  n)
{
    if (n < 1) return 0;
    long long sum = 1;
    long long p=primes.size();
    for (long long  i = 0; primes[i]*primes[i]<= n && i<p; i++)
    {
        if (n % primes[i] == 0)
        {
            long long  cnt = 1;
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                cnt++;
            }
            sum *= (powl(primes[i], cnt) - 1) / (primes[i] - 1);
        }
    }
    if (n > 1) sum *= (powl(n, 2) - 1) / (n - 1);
    return sum;
}

int main()
{
    sieve();
    
}
