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

void build(long long node,long long b,long long e)
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
int main()
{

    long long n=1000;

    for(long long i=1;i<=n;i++)
        {
            a[i]=i;
        }


    build(1,1,n);

    cout<<t[1];

        return 0;
    }


