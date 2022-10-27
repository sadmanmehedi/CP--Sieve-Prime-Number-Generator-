///CODED BY SADMAN MEHEDI SIVAN

#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector<int>v(5,1000);///(1000,1000,1000,1000,1000)

    vector<int>vec(5);///(0,0,0,0,0)

    ///iterator works as a memory address,it points

    vector <int>::iterator it=v.end();///last er porer index a thakbe
    vector <int>::iterator bit=v.rend();///last er porer index a thakbe
    vector <int>::iterator ist=v.rbegin();///last er porer index a thakbe


    cout<<v[0]<<" "<<v.at(0)<<endl;


    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++)
        cout<<*(it);

    return 0;

}
