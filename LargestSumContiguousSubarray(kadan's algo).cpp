///HELLO THERE~!
///CODED BY MD SADMAN MEHEDI SIVAN [IUT CSE(SWE)-19]

#include<bits/stdc++.h>
using namespace std;

#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define read            freopen("blue.txt","r",stdin);
#define write           freopen("red.txt","w",stdout);

using ll=long long;
using ull=unsigned long long;
const double pi = 2*acos(0.0);


long long maxSubArraySum(long long a[], long long size)
{
    long long max_so_far = INT_MIN, max_ending_here = 0;

    for (ll i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;


    }


    return max_so_far;
}

int main()
{
    long long n;
    cin>>n;

    long long a[n+1];


    for(ll i=0;i<n;i++)
        cin>>a[i];


    long long max_sum = maxSubArraySum(a, n);

    cout << max_sum;

    return 0;
}
