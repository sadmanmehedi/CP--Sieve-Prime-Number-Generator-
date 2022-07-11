///Complexity N*1000000


#include<bits/stdc++.h>
using namespace std;

const int N = 105;
#define int long long
int n, W, w[N], v[N], dp[N][100005];
int rec(int i, int weight) {
  if (i == n + 1) return 0;
  if (dp[i][weight] != -1) return dp[i][weight];
  int ans = rec(i + 1, weight);
  if (weight + w[i] <= W) ans = max(ans, rec(i + 1, weight + w[i]) + v[i]);
  return dp[i][weight] = ans;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> W;
  for (int i = 1; i <= n; i++) {
    cin >> w[i] >> v[i];
  }
  memset(dp, -1, sizeof dp);
  cout << rec(1, 0) << '\n';
  return 0;
}


///CPS
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5+123;
long long dp[123][mx];

int p[123], w[123];
int Sz, n;

long long solve ( int i, int curW )
{
    if ( i > n ) return 0;
    if ( dp[i][curW] != -1 ) return dp[i][curW];

    long long ret1 = 0, ret2 = 0;

    if ( w[i] + curW <= Sz ) ret1 = p[i] + solve ( i+1, w[i] + curW );
    ret2 = solve ( i+1, curW );

    return dp[i][curW] = max ( ret1, ret2 );
}


int main()
{
    cin >> n >> Sz;
    for ( int i = 1; i <= n; i++ ) {
        cin >> w[i] >> p[i];
    }

    memset ( dp, -1, sizeof ( dp ) );
    cout << solve ( 1, 0 ) << endl;

    
}
