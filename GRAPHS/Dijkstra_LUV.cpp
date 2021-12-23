///PROBLEM:https://www.spoj.com/problems/EZDIJKST/en/

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

vector<pair<int,int>>g[N];//NODE & WEIGHT


int dijkstra(int source,int destination)
{
    vector<int>vis(N,0);
    vector<int>dist(N,INF);

    set<pair<int,int>>st;//WEIGHT & NODE

    st.insert({0,source});
    dist[source]=0;

    while(st.size()>0)
    {
        auto node=*st.begin();
        int v=node.second;
        int v_dist=node.first;

        st.erase(st.begin());

        if(vis[v])
            continue;

        vis[v]=1;

        for(auto child:g[v])
        {
            int child_v=child.first;
            int wt=child.second;

            if(dist[v]+wt<dist[child_v])
            {
                dist[child_v]=dist[v]+wt;
                st.insert({dist[child_v],child_v});

            }
        }
    }

    return dist[destination];
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n,m;
        cin>>n>>m;
        memset(g,0,sizeof(g));
        for(int i=0; i<m; i++)
        {
            int x,y,wt;
            cin>>x>>y>>wt;

            g[x].push_back({y,wt});
            ///g[y].push_back({x,wt}) for undirected graphs
        }

        int source,destination;
        cin>>source>>destination;

        int answer=dijkstra(source,destination);

        if(answer==INF)
            cout<<"NO"<<endl;


        else
            cout<<answer<<endl;

    }

    return 0;
}
