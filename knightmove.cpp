#include<bits/stdc++.h>
using namespace std;

#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define READ            freopen("blue.txt","r",stdin);
#define WRITE           freopen("red.txt","w",stdout);

int x_axis[]={1,-1,-2,-2,2,2,-1,1};
int y_axis[]={-2,-2,-1,1,-1,1,2,2};

int  bfs(int x,int y,int n,int m)
{

    queue<pair<int,int>>q;

    int dis[8][8];
    int vis[8][8];
    memset(vis,-1,sizeof(vis));
    dis[x][y]=0;
    q.push({x,y});
    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        vis[x][y]=1;

        q.pop();
    
        for(int i=0;i<8;i++)
        {
            int a=x+y_axis[i];
            int b=y+x_axis[i];
            if(a>=0 && a<8 && b>=0 && b<8 && vis[a][b]==-1)
            {
                vis[a][b]=1;
                dis[a][b]=dis[x][y]+1;
                q.push({a,b});
        
                if(a==n && b==m )break;
            }
        }
        
        if(vis[n][m]==1)break;
    }
    return dis[n][m];
}

int main()
{

    FASTIO;
    char s1[3],s2[3];
    while(scanf("%s%s",s1,s2)!=EOF)
    {
        int x=s1[1]-'0';
        int y=s1[0]-'a'+1;
        int n=s2[1]-'0';
        int m=s2[0]-'a'+1;
        int ans=bfs(x-1,y-1,n-1,m-1);

        printf("To get from %s to %s takes %d knight moves.\n",s1,s2,ans);
    }


}
