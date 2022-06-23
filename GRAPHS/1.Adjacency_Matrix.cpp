///Perks: Perks: Check if two nodes uu and vv have an edge or not in O(1)O(1). Drawback: Too much space complexity for a sparse graph

#include<bits/stdc++.h>
using namespace std;

const int N = 105;
int g[N][N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    g[u][v] = 1;
    g[v][u] = 1;
  }
  if (g[4][2]) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
  return 0;
}
