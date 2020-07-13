///SQRT THEKE MAX 1TA BESI VALUE PRIME FACTORIZATION A THAKTE PARE
///MAX LOG2(n) TI FACTORIZATION THAKTE PARE
//THIS IS UNIQUE FOR EVERY ELEMNT
///FINAL TARGET TO REACH 1
RESOURCE:https://www.youtube.com/watch?v=C9nNJWANqB0&list=PLgLCjVh3O6Si82JG4dSp6iSQQnXBM3wjT&index=3
        http://lightoj.com/article_show.php?article=1002
        https://www.geeksforgeeks.org/prime-factor/
        
        
///HELLO THERE~!
///CREATED BY MD SADMAN MEHEDI SIVAN(IUT CSE[SWE'19])

#include<bits/stdc++.h>
using namespace std;

#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define READ            freopen("input.txt","r",stdin);
#define WRITE           freopen("red.txt","w",stdout);

using ll=long long;
using ull=unsigned long long;
const double pi = 2*acos(0.0);
const long long MX = 2e5+7;

vector<bool> flag(10000000, true);
vector<long long> primes;
vector<long long>factors;

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

 
long long primefactorization(long long f)
{
    for(ll i=0;i<=sqrt(f) && i<primes.size();i++)
    {
        if(f%primes[i]==0)
        {
            while(f%primes[i]==0)
            {
                factors.push_back(primes[i]);
                f/=primes[i];
 
            }
        }
    }
 
    if(f>1)
        factors.push_back(f);
 
 
 
 
 
}
 
int main()
{
    sieve();
    long long r;
    cin>>r;
    primefactorization(r);
    for(ll j=0;j<factors.size();j++)
        cout<<factors[j]<<endl;
 
    return 0;
}
