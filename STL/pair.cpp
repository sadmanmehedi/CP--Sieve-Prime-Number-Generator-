///Coded by Sadman Mehedi Sivan

#include<bits/stdc++.h>
using namespace std;


int main()
{

    pair<int,int> q={1,3};

    cout<<q.first<<" "<<q.second<<endl;

    pair<int,pair<int,int>> p={1,{3,4}};

    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;

    pair<int,int> arr[]={{1,2},{2,5},{3,7}};

    cout<<arr[1].second<<endl;



    return 0;


}
