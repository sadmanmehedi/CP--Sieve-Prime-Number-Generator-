#include<bits/stdc++.h>
using namespace std;

const int N = 55;
int f[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  f[0] = 0;
  f[1] = 1;
  int n = 5;
  for (int i = 2; i <= n; i++) {
    f[i] = f[i - 1] + f[i - 2];
  }
  cout << f[n] << '\n';
  return 0;
}
