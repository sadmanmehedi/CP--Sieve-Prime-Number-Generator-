Problem link:https://www.hackerrank.com/contests/hackerolympicscodechallenge/challenges/bfsshortreach
#include<bits/stdc++.h>
using namespace std;

#define READ            freopen("blue.txt","r",stdin);
#define WRITE           freopen("red.txt","w",stdout);

const double pi = 2*acos(0.0);
const long mx = LONG_MAX;
const long mn = LONG_MIN;

vector<int>graph[1001];
int vis[1001];
int dis[1001];

void reset()
{
    for(int i=0;i<1001;i++)
    {
        vis[i] = 0;
        dis[i] = -1;
        graph[i].clear();
    }
}
void bfs(int s)
{
    vis[s] = 1;
    dis[s] = 0;

    queue<int>Q;
    Q.push(s);



    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(vis[v] == 1) continue;
            dis[v] = dis[u] + 6;
            vis[v] = 1;
            Q.push(v);

        }

    }
}


int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        reset();
        int n,m;
        cin>>n>>m;

        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);

        }

        int s;
        cin>>s;
        bfs(s);
        for(int i=1;i<=n;i++)
            if(i != s)cout<<dis[i]<<" ";
        cout<<endl;
    }



}
