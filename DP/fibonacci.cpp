///ASLAMUALAIKUM :)
///CODED BY MD SADMAN MEHEDI SIVAN(IUT CSE[SWE'19])

#include<bits/stdc++.h>
using namespace std;

#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define READ            freopen("blue.txt","r",stdin);
#define WRITE           freopen("red.txt","w",stdout);

using ll=long long;
using ull=unsigned long long;

const double pi = 2*acos(0.0);
const long mx = LONG_MAX;
const long mn = LONG_MIN;
const int N=1e5+10;
const int INF=1e9+10;

int dp[N];

int fib(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 1;

        if(dp[n]!=-1)
            return dp[n];

    return dp[n]=fib(n-1)+fib(n-2);
}



int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;

    cout<<fib(n);


}
