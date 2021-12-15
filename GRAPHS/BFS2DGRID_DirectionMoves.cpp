///Problem Link:https://cses.fi/problemset/task/1193
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
long long vis[1001][1001];
long long dis[1001][1001];
long long disx[]= {-1,1,0,0};
long long disy[]= {0,0,1,-1};
vector<char>finalpath;
char t[1001][1001];
char direction[1001][1001];



ll bfs(ll sx,ll sy,ll ex,ll ey)
{

    queue<pair <ll,ll> >q;
    dis[sx][sy]=0;
    q.push({sx,sy});

    while(!q.empty())
    {
        ll sx=q.front().first;
        ll sy=q.front().second;

        q.pop();

        for(int i=0; i<4; i++)
        {
            ll a=sx+disx[i];
            ll b=sy+disy[i];

            if(a>=0 && a<r && b>=0 && b<c && vis[a][b]==0 &&t[a][b]!='#')
            {
                if(disx[i]==0 && disy[i]==-1)
                {
                    direction[a][b]='L';
                }
                if(disx[i]==0 && disy[i]==1)
                {
                    direction[a][b]='R';
                }
                if(disx[i]==1 && disy[i]==0)
                {
                    direction[a][b]='D';
                }
                if(disx[i]==-1 && disy[i]==0)
                {
                    direction[a][b]='U';
                }
                vis[a][b]=1;
                dis[a][b]=dis[sx][sy]+1;
                q.push({a,b});

                if(a==ex && b==ey)
                    break;

            }


        }
        if(vis[ex][ey]==1)
            break;
    }

    return dis[ex][ey];


}

int main()
{


    cin>>r>>c;

    ll sx,sy,ex,ey;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>t[i][j];
            if(t[i][j]=='A')
            {
                sx=i;
                sy=j;
            }
            if(t[i][j]=='B')
            {
                ex=i;
                ey=j;
            }
        }

    }

    ll ans;
    if(ans=bfs(sx,sy,ex,ey))
    {
        cout<<"YES"<<endl;
        cout<<ans<<endl;



        ll f=ex;
        ll m=ey;


        while(1)
        {

           if(f==sx && m==sy)
                break;
            finalpath.push_back(direction[f][m]);



            if(direction[f][m]=='R')
            {
                m--;
            }

            else if(direction[f][m]=='L')
            {
                m++;
            }

            else if(direction[f][m]=='U')
            {
                f++;

            }

            else if(direction[f][m]=='D')
            {
                f--;
            }



        }

        reverse(finalpath.begin(),finalpath.end());
        for(auto it:finalpath)
            cout<<it;
    }

    else
        cout<<"NO"<<endl;




    return 0;
}
