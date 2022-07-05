/*
You are given an integer n(1 \le n \le 10^5)n(1≤n≤10 
5
 ). Find the number of ways to write nn as sums of 11 and 33. Output the answer modulo 10^9+710 
9
 +7.
*/


#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int step[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n = 100000;
  step[1] = 0;
  for (int i = 2; i <= n; i++) {
    int ans = step[i - 1] + 1;
    if (i % 2 == 0) {
      ans = min(ans, step[i / 2] + 1);
    }
    if (i % 3 == 0) {
      ans = min(ans, step[i / 3] + 1);
    }
    step[i] = ans;
  }
  cout << step[n] << '\n';
  return 0;
}
