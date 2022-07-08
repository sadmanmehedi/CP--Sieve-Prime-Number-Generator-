//https://www.youtube.com/watch?v=eQCS_v3bw0Q&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=7

///Coded By Sadman Mehedi Sivan

#include<bits/stdc++.h>
using namespace std;

const long long N=3e5+9;

void printF(long long ind,vector<long long>&ds,long long s,long long sum,long long arr[],long long n)
{
    if(ind==n)
    {
        if(s==sum)
        {
            for(auto it:ds)
                cout<<it<<"  ";

            cout<<endl;
        }

        return;
    }



    // take or pick the particular index into the subsequence;

    ds.push_back(arr[ind]);
    s+=arr[ind];

    printF(ind+1,ds,s,sum,arr,n);

    s-=arr[ind];
    ds.pop_back();

    //Not pick or not take condition,this element is not added to your subsequence

    printF(ind+1,ds,s,sum,arr,n);


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
