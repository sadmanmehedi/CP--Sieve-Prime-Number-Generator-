//PROBLEM LINK:https://cses.fi/problemset/task/1622/
//RESOURCE:https://www.geeksforgeeks.org/permutations-of-a-given-string-using-stl/


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


void permute(string str)
{
    sort(str.begin(), str.end());

    do
    {
        cout << str << endl;
    }

    while (next_permutation(str.begin(), str.end()));

}


long long factorial(ll n)
{
    ll answer=1;


    for(ll i=1; i<=n; i++)
    {

        answer=answer*i;
    }


    return answer;

}


int main()
{

    string s;
    cin>>s;

    map<char,ll> mp;

    for(ll i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }

    ll poss=1;

    for(ll i=1; i<=s.size(); i++)
    {
        poss=poss*i;
    }

    for(char c='a'; c<='z'; c++)
    {
        ll r=mp[c];
        poss/=factorial(r);

    }

    cout<<poss<<endl;
    permute(s);


    return 0;
}
