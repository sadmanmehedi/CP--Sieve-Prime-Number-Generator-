#include<bits/stdc++.h>
using namespace std;

class Solution
{

public:

    void solve(long long ind,vector<long long> &arr,vector<long long>&ans,long long sum,long long n)
    {
        if(ind==n)
        {
            ans.push_back(sum);
            return ;
        }

        solve(ind+1,arr,ans,sum+arr[ind],n);
        solve(ind+1,arr,ans,sum,n);
    }



    vector<long long> Subsetsum(vector<long long>arr,long long n)
    {

        vector<long long>ans;
        solve(0,arr,ans,0,n);

        return ans;

    }
};


int main()
{
    vector<long long>arr= {1,2,3,4,5};

    Solution obj;

    vector<long long>ans=obj.Subsetsum(arr,arr.size());

    sort(ans.begin(),ans.end());

    for (auto sum: ans)
    {
        cout << sum << " ";
    }
    cout << endl;


}
