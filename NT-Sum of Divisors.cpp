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


int main()
{
    sieve();
    
}
