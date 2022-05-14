#include<bits/stdc++.h>
using namespace std;

#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define READ            freopen("blue.txt","r",stdin);
#define WRITE           freopen("red.txt","w",stdout);

using ll=long long;
using ull=unsigned long long;

const double pi = 2*acos(0.0);
const long mx = LONG_MAX;
const long mn = LONG_MIN;

int main()
{

    long long n;
    cin >> n;

    vector<long long> divs;

    for (long long i = 1; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            divs.push_back(i);

            if (i != n / i) divs.push_back(n / i);
        }
    }

    sort(divs.begin(), divs.end());

    for (auto x: divs) cout << x << ' ';


    return 0;

}



