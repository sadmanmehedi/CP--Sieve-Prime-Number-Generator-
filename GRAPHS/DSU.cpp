
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

    for(long long i=1;i<=n;i++)

    {
        Make(i);
    }

    while(k--)
    {
        long long u,v;
        cin>>u>>v;
        Union(u,v);
    }


        long long count=0;

        for(long long i=1;i<=n ;i++)
        {
            if(Find(i)==i)
                count++;
        }

        cout<<count<<endl;



}
