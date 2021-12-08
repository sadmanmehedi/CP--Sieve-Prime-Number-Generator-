///ASLAMUALAIKUM :)
///CODED BY MD SADMAN MEHEDI SIVAN(IUT CSE[SWE'19])

#include<bits/stdc++.h>
using namespace std;

#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

using ll=long long;
using ull=unsigned long long;


#define WHITE 0
#define BLACK 1

ll vis[1000];
vector<ll>adj[1000];

void dfs(ll source)
{

    vis[source]=BLACK;
    cout<<source<<endl;

    for(ll j=0; j<adj[source].size(); j++)
    {
        ll d=adj[source][j];
        if(vis[d]==WHITE)
            dfs(d);
    }

}


int main()
{

    long long node,edges;
    cin>>node>>edges;


    for(ll i=0; i<edges; i++)
    {
        ll x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);


    }

    ll source;
    cin>>source;
    dfs(source);



}
