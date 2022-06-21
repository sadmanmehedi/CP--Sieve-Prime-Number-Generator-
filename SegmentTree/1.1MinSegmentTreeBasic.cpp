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

const long long N=3e5 + 9 ;
long long a[N];
long long tree[N*4];
long long n,q;

void build(long long node,long long b,long long e)
{
        if(b==e)
        {
            tree[node]=a[b];
            return ;
        }

        long long l=2*node;
        long long r=2*node+1;
        long long mid=(b+e)/2;


        build(l,b,mid);
        build(r,mid+1,e);
        tree[node]=min(tree[l],tree[r]);
}

long long querymin(long long node,long long b,long long e,long long i,long long j)
{
       if(b>=i && e<=j)
       {
           return tree[node];
       }

        if(i>e || j<b)
        {
            return LONG_MAX;
        }

        long long l=2*node;
        long long r=2*node+1;
        long long mid=(b+e)/2;


        return min(querymin(l,b,mid,i,j),querymin(r,mid+1,e,i,j));

}

int main()
{

    cin>>n>>q;

    for(long long i=1;i<=n;i++)
        cin>>a[i];


  build(1,1,n);


while(q--)
    {

        long long x,y;
        cin>>x>>y;

        cout<<querymin(1,1,n,x,y)<<endl;
    }








}

