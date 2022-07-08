//Ref:https://www.youtube.com/watch?v=AxNNVECce8c&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=6

///Coded By Sadman Mehedi Sivan

#include<bits/stdc++.h>
using namespace std;

const long long N=3e5+9;

void printF(long long ind,vector<long long>&ds,long long arr[],long long n)
{
    if(ind==n)
    {
        for(auto it:ds)
            cout<<it<<"  ";

        if(ds.size()==0)
        {
            cout<<"{}";
        }

        cout<<endl;

        return;
    }



    // take or pick the particular index into the subsequence;

    ds.push_back(arr[ind]);

    printF(ind+1,ds,arr,n);

    ds.pop_back();

    //Not pick or not take condition,this element is not added to your subsequence

    printF(ind+1,ds,arr,n);


}



int main()
{


    long long arr[]= {1,2,3};

    long long n=3;

    vector<long long>ds;


    printF(0,ds,arr,n);


    return 0;

}
