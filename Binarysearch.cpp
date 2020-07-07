///RECOMMENDED VIDEO:CODING BLOCKS,ERRICHTO
///PRACTICE CODECHEF,HACCKERRANK,CODEFORCES,CSES AND TOPIC WISE PROBLEM SHEET


#include<bits/stdc++.h>
using namespace std;

long long binarysearch(long long arr[],long long n,long long key)
{
    long long low=0,high=n-1;
    long long mid;

    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
    }

    return -1;

}



int main()
{

    long long arr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    long long n=sizeof(arr)/sizeof(long long);

    long long key;
    cin>>key;

    long long searchindex=binarysearch(arr,n,key);

    if(searchindex==-1)
    {
        cout<<"NOT FOUND!";
    }

    else
    {
        cout<<"THE ELEMENT "<<key<<" IS FOUND IN "<<searchindex<<" INDEX OF THE ARRAY.";
    }

    return 0;


}



