///https://www.youtube.com/watch?v=4VCqVBnUrDY&list=PL5DyztRVgtRVLwNWS7Rpp4qzVVHJalt22&index=12


long long timer=1;

void dfs(long long v)
{
    vis[v]=1;
    IN[v]=timer++;
    
    for(auto u:v)
    {
        if(vis[u]==0)
        {
            dfs(u);
        }
    }
    
    
    OUT[v]=timer++;
}
