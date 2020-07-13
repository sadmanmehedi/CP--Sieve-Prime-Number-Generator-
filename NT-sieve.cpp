

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



int main()
{
    sieve();
 

    return 0;
}

