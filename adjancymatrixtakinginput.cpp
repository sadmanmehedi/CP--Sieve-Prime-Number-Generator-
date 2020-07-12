///HELLO THERE~!
///CREATED BY MD SADMAN MEHEDI SIVAN(IUT CSE[SWE'19])

#include<bits/stdc++.h>
using namespace std;

#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define READ            freopen("input.txt","r",stdin);
#define WRITE           freopen("red.txt","w",stdout);

using ll=long long;
using ull=unsigned long long;
const double pi = 2*acos(0.0);
const long long MX = 2e5+7;


long long adj[100][100];

int  main()
{
    FASTIO;
    READ;


    ll nodes,edges;

    cout<<"Enter the number of nodes?"<<endl;
    cin>>nodes;

    cout<<"Enter the number of edges?"<<endl;
    cin>>edges;


    for(ll i=0; i<edges; i++)
    {

        ll n1,n2;
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;

    }

    for(ll i=0; i<nodes; i++)
    {

        for(ll j=0; j<nodes; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;


}
