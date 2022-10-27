///CODED BY SADMAN MEHEDI SIVAN

#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector<int>v(5,1000);///(1000,1000,1000,1000,1000)

    vector<int>vec(5);///(0,0,0,0,0)

    ///iterator works as a memory address,it points

    vector <int>::iterator it=v.end(); //last er porer index a thakbe
    vector <int>::reverse_iterator bit=v.rend();///vector k reverse kore then last index er pore
    vector <int>::reverse_iterator ist=v.rbegin();///reverse kore first index,++ korle bame jabe


    cout<<v[0]<<" "<<v.at(0)<<endl;


    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++)
        cout<<*(it);


    ///auto=iterator er sob kaj korte pare.


    for(auto rit:v)
        cout<<rit;///no * neeeded



    ///DELETION PART

        v.erase(v.begin()+1);///index 1 will be deleted


        v.erase(v.begin()+1,v.begin()+3);///index 1 and 2 will be deleted not 3,it works like this [)

        ///INSERTATION PART

        v.insert(v.begin+2(1000));///2 index a 1000 insert hoye jabe
        v.insert(v.begin(),2,10);///0 index a 2 ta 10 push hoye jabe



    return 0;

}
