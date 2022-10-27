///Coded by Sadman Mehedi Sivan

#include<bits/stdc++.h>
using namespace std;


int main()
{

    vector<long long>v;

    v.emplace_back(3);
    v.emplace_back(4);

    for(auto d:v)
        cout<<d<<" ";

    cout<<endl;


    vector<pair<long long,long>>v2;

    v2.emplace_back(3,4);

    for(auto e:v2)
        cout<<e.first<<" "<<e.second;

    return 0;


}
