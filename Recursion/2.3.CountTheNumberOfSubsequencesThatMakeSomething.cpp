///Coded By Sadman Mehedi Sivan

#include<bits/stdc++.h>
using namespace std;

const long long N=3e5+9;

long long printF(long long ind,long long s,long long sum,long long arr[],long long n)
{
    if(ind==n)
    {
        if(s==sum)
        {

            return 1;
        }


        else
            return 0;


    }





    // take or pick the particular index into the subsequence;


    s+=arr[ind];

    long long l=printF(ind+1,s,sum,arr,n);


    s-=arr[ind];


    //Not pick or not take condition,this element is not added to your subsequence

    long long r=printF(ind+1,s,sum,arr,n);

    return l+r;


}



int main()
{


    long long arr[]= {1,2,1};

    long long n=3;

    long long sum=2;

    vector<long long>ds;


    cout<<printF(0,0,sum,arr,n);


    return 0;

}
