///ASLAMUALAIKUM ^^
///CODED BY MD SADMAN MEHEDI SIVAN(IUT CSE[SWE'19])

#include<bits/stdc++.h>
using namespace std;

#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define READ            freopen("input.txt","r",stdin);
#define WRITE           freopen("output.txt","w",stdout);

using ll=long long;
using ull=unsigned long long;

const double pi = 2*acos(0.0);
const long mx = LONG_MAX;
const long mn = LONG_MIN;

const long long N=1e5 + 9 ;

long long a[N];
long long t[N*4];//Node wise sum er value rakhbo

void build(long long node,long long b,long long e)///Tree Build Kortesi
{

if(b==e)
{
     t[node]=a[b];
     return;
}

long long l=2*node;//left er index no
long long r=2*node+1;//right er index no



long long mid=(b+e)/2;

build(l,b,mid);
build(r,mid+1,e);

t[node]=t[l]+t[r];

}


long long querysum(long long node,long long b,long long e,long long i,long long j)///eita amar range sum dibe as kichu node a hoito amar iccha moto range nai and amra i & j use kortesi as l & r vitore use kora porse
{
    if(b>j or e<i)
        return 0;

    if(b>=i and e<=j)
        return t[node];//karon niche jaoar dorkar nei

    long long l=2*node;
    long long r=2*node+1;
    
    long long mid=(b+e)/2;

    return querysum(l,b,mid,i,j)+querysum(r,mid+1,e,i,j);




}


int main()
{
    long long n=1000;

    for(long long i=1;i<=n;i++)
        {
            a[i]=i;
        }


    build(1,1,n);

    cout<<t[1]<<endl;

    cout<<querysum(1,1,n,2,6);

        return 0;
    }


