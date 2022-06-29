///TUTORIAL:https://www.youtube.com/watch?v=SQOQ99stCas
///Ekhane visited array lagena eita ekta major difference than bfs
///Ekhane Deque use kora hoy karon onek shomoy samneo add kora lagte pare
///At a single time maximum 2ta level er node e process hote pare
///jodi edge value 0 hoy taile push front ar 1 hole push back

#include<bits/stdc++.h>
using namespace std;

const long long N=1e5+10;
const  long long INF=1e9+10;

vector<pair<long long,long long>>g[N];
vector<long long> dis(N,INF);
long long n,m;


long long bfs()
{
    deque<long long>q;
    q.push_back(1);
    dis[1]=0;

    while(!q.empty())
    {
        long long cur_v=q.front();
        q.pop_front();

        for(auto child:g[cur_v])
        {
            long long child_v=child.first;
            long long wt=child.second;

            if(dis[cur_v]+wt<dis[child_v])
            {
                dis[child_v]=dis[cur_v]+1;
                if(wt==1)
                    q.push_back(child_v);
                else
                    q.push_front(child_v);
            }
        }
    }
    return dis[n]==INF?-1:dis[n];
}

int main()
{

    cin>>n>>m;
    for(long long i=0; i<n; i++)
    {
        long long x,y;
        cin>>x>>y;

        if(x==y)
            continue;

        g[x].push_back({y,0});
        g[y].push_back({x,1});
    }

    return 0;

}
