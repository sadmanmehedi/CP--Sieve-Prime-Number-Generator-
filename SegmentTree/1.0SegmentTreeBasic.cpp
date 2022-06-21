///TUTORIAL:https://www.youtube.com/watch?v=Uyue53xZf-w


///BRUTE FORCE YET LOGN
///XOR,MAX,MIM,GCD shob kaj korbe

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

const long long N=3e5 + 9 ;///Array Size important

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


void upd(long long node,long long b,long long e,long long i,long long x)//a[i]=x korbo & eta single node er note of any range
{
    if(b>i or e<i) return ;

    if(b==e and b==i)
    {
        t[node]=x;//Value update kore dilam;
        return ;
    }

    long long l=2*node;
    long long r=2*node+1;
    
    long long mid=(b+e)/2;

    upd(l,b,mid,i,x);
    upd(r,mid+1,e,i,x);
    t[node]=t[l]+t[r];

}


int main()
{
    long long n=7;

    for(long long i=1;i<=n;i++)
        {
            a[i]=i;
        }

    ///a[7]=[1,2,3,4,5,6,7];
    
    build(1,1,n);

    cout<<t[1]<<endl;

    cout<<querysum(1,1,n,2,6)<<endl;
    
    upd(1,1,n,3,10);//Single Node er not range

    ///a[7]=[1,2,10,4,5,6,7];
    
    cout<<querysum(1,1,n,2,6)<<endl;

        return 0;
    }


