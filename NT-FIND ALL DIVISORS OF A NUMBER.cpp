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
  
void printDivisors(int n) 
{ 
  
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            
            if (n/i == i) 
                printf("%d ", i); 
  
            else 
                printf("%d %d ", i, n/i); 
        } 
    } 
} 

///EFFICIENT ALGO
long long countDivisor(long long n)
{
    long long divisor = 1;
    for (long long i = 0; i < primes.size(); i++)
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
    return divisor;
}
int main()
{
  long long n;
  cin>>n;
  countDivisior(n);
  return 0;
}
