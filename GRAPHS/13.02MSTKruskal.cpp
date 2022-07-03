///Same as DSU
///Resource:https://www.youtube.com/watch?v=xDrLSOxaFrA&list=PLauivoElc3ghxyYSr_sVnDUc_ynPk6iXE&index=21

#include<bits/stdc++.h>
using namespace std;

const long long N=1e5+10;
long long parent[N];
long long size[N];


void Make(long long v)
{

    parent[v]=v;//Starting a independent node create
    size[v]=1;
}

long long Find(long long v)
{

    if(v==parent[v])
        return v;
    //Path compression
    return parent[v]=Find(parent[v]);
}

void Union(long long a,long long b)
{
    a=Find(a);//Parent khujtesi
    b=Find(b);//Parent Khujtesi

    if(a!=b)
    {
        //Union by SIZE
        if(size[a]<size[b])
            swap(a,b);

            parent[b]=a;
            size[a]+=size[b];
    }



}


int main()
{


    long long n,k;
    cin>>n>>k;

    vector<pair<long long,pair<long long,long long>>>v;

    while(k--)
    {
        long x,y,wt;
        cin>>x>>y>>wt;
        v.push_back({wt,{x,y}});
    }

    sort(v.begin(),v.end());

    for(long long i=1;i<=n;i++)

    {
        Make(i);
    }

    long long total_cost=0;

    for(auto edge:v)
    {
        long long wt=edge.first;
        long long p=edge.second.first;
        long long q=edge.second.second;

        if(Find(p)==Find(q))//Both have same parent connect korle loop hobe tree thakbena
        {
            continue;
        }

        else
            Union(p,q);

        total_cost+=wt;
    }


    cout<<total_cost;




}
