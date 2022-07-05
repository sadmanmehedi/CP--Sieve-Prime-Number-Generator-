#include<bits/stdc++.h>
using namespace std;

const int N = 55;
int f[N];
bool is_computed[N];
int fibo(int i) {
  if (i == 0) return 0;
  if (i == 1) return 1;
  if (is_computed[i]) return f[i];
  f[i] = fibo(i - 1) + fibo(i - 2);
  is_computed[i] = true;
  return f[i];
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout << fibo(50) << '\n';
  return 0;
}
