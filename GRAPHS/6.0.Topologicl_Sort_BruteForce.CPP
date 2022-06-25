///O(n^2)

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int indeg[N];
vector<int> g[N];
bool vis[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    indeg[v]++;
    g[u].push_back(v);
  }
  vector<int> ans;
  while (ans.size() < n) {
    int cur = 0;
    for (int i = 1; i <= n; i++) {
      if (!vis[i] and indeg[i] == 0) {
        cur = i;
        break;
      }
    }
    if (cur == 0) {
      cout << "IMPOSSIBLE\n";
      return 0;
    }
    vis[cur] = true;
    ans.push_back(cur);
    for (auto v: g[cur]) {
      indeg[v]--;
    }
  }
  for (auto x: ans) cout << x << ' ';
  return 0;
}
