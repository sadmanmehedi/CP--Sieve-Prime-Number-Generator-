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

int dp[1005][1005];

int lcs(int i,int j,string &s1,string &s2)
{
    int ans=lcs(i-1,j,s1,s2);
    ans=max(ans,lcs(i,j-1,s1,s2));
    ans=max(ans,lcs(i-1,j-1,s1,s2));
return dp[i][j]=ans;
}

int longestCommonSubsequence(string text1,string text2)
{
    memset(dp,-1,sizeof(dp));
    return lcs(text1.size(),text2.size()-1,text1,text2);

}


int main()
{

}
