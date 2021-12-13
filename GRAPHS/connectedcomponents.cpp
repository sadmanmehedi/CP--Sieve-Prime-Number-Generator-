///PROBLEM:https://cses.fi/problemset/task/1667

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

long long r,c;
long long vis[3000001];
long long dis[3000001];
vector<ll>v[3000001];

ll bfs(ll a,ll b)
{
    queue <ll> q;
    q.push(a);

    dis[a]=0;

    while(!q.empty())
    {
        ll x=q.front();
        q.pop();

        for(ll i=0;i<v[x].size();i++)
        {
            ll d=v[x][i];

            if(vis[d]==1)
                continue;

            dis[d]=dis[x]+1;
            vis[d]=1;
            q.push(d);

            if(d==b)
                break;

        }

        if(vis[b]==1)
            break;
    }

        return dis[b];




}

int main()
{
    ll n,m;
    cin>>n>>m;

    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    ll ans;

    if(ans=bfs(1,n))
    {
        cout<<ans+1;
    }

    else
        cout<<"IMPOSSIBLE";




    return 0;
}
