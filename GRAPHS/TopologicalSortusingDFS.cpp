///ORDERING TASK BASEND ON ORDER
///NOT EVERY GRAPH HAS TOPOLOGICAL SORT
///ONLT DIRECTED ACYCLIC GRAPH HAS A TOPOLOGICAL SORT 
///IT WILL NOT BE AN UNIQUE ONE
///A DIRECTED EDGE FROM U TO V MEANS U HAS TO BE DONE BEFORE V.U IS THE PREQUISTIC BEFORE V
///1TAO GYCLE THAKA JABENA
///DIFFERENTE DISCONNECTED ER MAJHE RELATION NEI..ALADA ALDA DEAL KORE MERGE KORTE HOBE..TOBE EVERY COMPONENT SHESH KORE THEN ASHTE HOBE

///https://www.youtube.com/watch?v=mLIB_KXsjZM
/// IMPLEMENT USING DFS
///WHEN A NODE HAS NO VISITED CHILD PUSH IT INTO THE RESULT
///AFTER DFS IS VISITED ON EVERY NODE REVERSE THE RESULT

#include<bits/stdc++.h>
using namespace std;

vector < int > graph[105];
bool visited[105];

vector < int > result;

void dfs(int source){

    visited[source] = 1;
    for (int i = 0; i < graph[source].size(); i++){
        int next = graph[source][i];
        if (visited[next] == 0)
            dfs(next);
    }
    // all children explored
    result.push_back(source); // newly included
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    for (int i = 1; i <= nodes; i++){
        if (visited[i] == 0)
            dfs(i);
    }

    reverse(result.begin(), result.end());
    cout << "Topological order: ";
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << ' ';
    }
    cout << endl;
    return 0;
}
