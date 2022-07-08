///Coded By Sadman Mehedi Sivan

#include<bits/stdc++.h>
using namespace std;

const long long N=3e5+9;

bool printF(long long ind,vector<long long>&ds,long long s,long long sum,long long arr[],long long n)
{
    if(ind==n)
    {
        if(s==sum)
        {
            for(auto it:ds)
                cout<<it<<"  ";

            cout<<endl;

            return true;
        }


        else
            return false;


    }





    // take or pick the particular index into the subsequence;

    ds.push_back(arr[ind]);
    s+=arr[ind];

    if(printF(ind+1,ds,s,sum,arr,n)==true)
        return true;

    s-=arr[ind];
    ds.pop_back();

    //Not pick or not take condition,this element is not added to your subsequence

    if(printF(ind+1,ds,s,sum,arr,n)==true)
        return true;

    return false;


}



int main()
{


    long long arr[]= {1,2,1};

    long long n=3;

    long long sum=2;

    vector<long long>ds;


    printF(0,ds,0,sum,arr,n);


    return 0;

}
