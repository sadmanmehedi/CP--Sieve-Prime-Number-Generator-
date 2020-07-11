PROBLEM:https://codeforces.com/contest/363/problem/B

///HELLO THERE~!
///CREATED BY MD SADMAN MEHEDI SIVAN(IUT CSE-SWE^19)
 
#include <bits/stdc++.h>
 
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define read freopen("blue.txt","r",stdin);
#define write freopen("red.txt","w",stdout);
#define pie 2*acos(0.0);
 
typedef long long ll;
 
using namespace std;
 
long long  minsum(long long  arr[], long long  k, long long  n)
{
    long long  x;
 
    long long  minsum = 0;
 
    long long  currentSum = 0;
 
 
    for (long long  i=0; i<k; i++)
    {
        currentSum += arr[i];
    }
 
    x=0;
 
 
    minsum = currentSum;
 
 
    for (long long  i=k; i<n; i++)
    {
 
        currentSum += arr[i] - arr[i-k];
        if (currentSum < minsum)
        {
            minsum = currentSum;
            x=i-k+1;
        }
    }
    return x;
}
 
 
 
int  main()
{
    fastio;
 
    long long  n,k;
    cin>>n>>k;
 
    long long  sivan[n+1];
 
    for(long long  i=0; i<n; i++)
        cin>>sivan[i];
 
    long long  y = minsum(sivan, k, n);
    cout<<y+1;
    return 0;
}
