///ASLAMUALAIKUM :)
///CODED BY MD SADMAN MEHEDI SIVAN(IUT CSE[SWE'19])

///TIME COMPLEXITY O(n^)
///RAKIB SIR BOOK

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

    int num[6]= {5,8,6,1,7,9};

    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(num[i]>num[j])
            {
                swap(num[i],num[j]);
            }
        }
    }

    for(int i=0; i<6; i++)
    {
        cout<<num[i]<<endl;
    }


return 0;

}
