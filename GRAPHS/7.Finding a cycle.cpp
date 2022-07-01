//IF THERE IS MORE THAN ONE WAY BETWEEN TWO NODES IN A GRAPH MEANS IT HAS A CYCLE

///Directed Graph a Node 2 ta hoileo ekta Cycle create hoite pare Undirected Graph a atleast 3 ta nodes dorkar for making a graph

///FOR UNDIRECTED GRAPH

bool dfs(long long node,long long par)
{
  
   vis[node]=1;
  
  for(auto u:node)
  {
    if(vis[u]==0)
    {
      if(dfs(u,node)==true;
         return true;
     }
    
         else
         {
           if(child!=par)
             return true;
         }
         
     }
         
       return false;
   
         }




///FOR DIRECTED GRAPH

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
int col[N], par[N];
bool cycle;
void dfs(int u) {
  col[u] = 1;
  for (auto v: g[u]) {
    if (col[v] == 0) {
      par[v] = u;
      dfs(v);
    }
    else if (col[v] == 1) {
      cycle = true;
      // you can track the cycle using par array
    }
  }
  col[u] = 2;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v); 
  }
  cycle = false;
  for (int i = 1; i <= n; i++) {///Jodi component thake graph a 
    if (col[i] == 0) dfs(i);
  }
  cout << (cycle ? "YES\n" : "NO\n") << '\n';
  return 0;
}
