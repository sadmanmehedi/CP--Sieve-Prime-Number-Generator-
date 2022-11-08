///CODED BY SADMAN MEHEDI SIVAN

#include<bits/stdc++.h>
using namespace std;

long long binarysearch(long long arr[],long long n,long long x)
{

    long long low=0,high=n-1;

    while(low<=high)
    {

    long long mid=(low+high)/2;

    if(arr[mid]==x)
    return mid;

    if(x>arr[mid])
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }

    }

    return  -1 ;

}

long long firstoccurance(long long arr[],long long n,long long x)
{
    long long lo=0,hi=n-1;

    long long mid,ans=-1;

    while(lo<=hi)
    {
        mid=(lo+hi)/2;

        if(arr[mid]==x)
        {
            ans=mid;
            hi=mid-1;
        }
        if(arr[mid]<x)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }

    return ans;

}

int main()
{

   long long n;
   cin>>n;

   long long a[n+1];

   for(long long i=0;i<n;i++)
   cin>>a[i];

   long long x;
   cin>>x;

   cout<<binarysearch(a,n,x)<<endl;
   cout<<firstoccurance(a,n,x)<<endl;




    return 0;

}

