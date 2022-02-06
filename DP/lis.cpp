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
vector<int>a(N);
int dp[N];

int lis(int i)
{
    if(dp[i]!=-1)
        return dp[i];

     int ans=1;

     for(int j=0;j<i;j++)
     {
         if(a[i]>a[j])
         {
             ans=max(ans,lis(j)+1);
         }
     }

     return dp[i]=ans;
}



int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    cin>>a[i];

    int ans=0;

    for(int i=0;i<n;i++)
    {
        ans=max(ans,lis(i));
    }

    cout<<ans;

}
