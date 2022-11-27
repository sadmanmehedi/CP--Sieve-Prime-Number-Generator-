///HOW MANY TRIPLETS CAN MAKE SUM 0 CAN ALSO BE DONE BY THIS
///CAN ALSO SEE THE BASIC VARIATIONS THAT HOW TWO NUMBERS SUM IS PRESENT OR NOT WHICH IS GIVEN 
///https://www.youtube.com/watch?v=9Fb4xuKGb_g&list=PL0G2Ga9ALv6n7OD06Q7cjOMxKKCefG2B1&index=7
//Brute Force N^3 & Using Two Pointers makes it N^2

///CODED BY SADMAN MEHEDI SIVAN


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,x;
    cin>>n>>x;

    long long a[n+1];

    vector<pair<long long,long long>>v;
    for(long long i=0; i<n; i++)
    {
        cin>>a[i];
        v.push_back({a[i],i+1});
    }

    sort(v.begin(),v.end());



    for(long long i=0; i<n; i++)
    {
        long long l=i+1;
        long long r=n-1;
        while(l<r)
        {
            long long sum=v[i].first+v[l].first+v[r].first;

            if(sum==x)
            {
                cout<<v[i].second<<" "<<v[l].second<<" "<<v[r].second<<endl;
                return 0;

            }
            if(sum>x)
            {
                r--;
            }
            if(sum<x)
                l++;
        }
    }

    cout<<"IMPOSSIBLE";


    return 0;
}



