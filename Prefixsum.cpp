PROBLEM:https://codeforces.com/contest/433/problem/B

///HELLO THERE~!
///CREATED BY MD SADMAN MEHEDI SIVAN(IUT CSE[SWE'19])

#include<bits/stdc++.h>
using namespace std;

#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define READ            freopen("blue.txt","r",stdin);
#define WRITE           freopen("red.txt","w",stdout);

using ll=long long;
using ull=unsigned long long;
const double pi = 2*acos(0.0);
const long long MX = 2e5+7;

int main()
{
    long long n;
    cin>>n;

    long long a[n+1],y[n+1];

    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        y[i]=a[i];
    }
    sort(y,y+n);


    for(ll i=1; i<n; i++)
    {
        a[i]+=a[i-1];
        y[i]+=y[i-1];
    }


    long long m;
    cin>>m;

    while(m--)
    {
        ll l,r,q;
        cin>>q>>l>>r;

        if(q==1)
        {
            if(l==1)
                cout<<a[r-1]<<endl;
            else
                cout<<a[r-1]-a[l-2]<<endl;
        }

        else
        {
            if(l==1)
                cout<<y[r-1]<<endl;
            else
                cout<<y[r-1]-y[l-2]<<endl;
        }
    }




    return 0;

}

