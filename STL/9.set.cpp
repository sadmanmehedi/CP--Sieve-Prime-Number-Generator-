///CODED BY SADMAN MEHEDI SIVAN

#include<bits/stdc++.h>
using namespace std;



int main()
{

    set<int>st;
    st.insert(1);
    st.insert(5);
    st.emplace(2);
    st.emplace(43);
    st.emplace(22);
    ///Sorted and Unique;


    auto it=st.find(2);///na paoa gele st.end pathabe

    st.erase(5);///value 5 and takes logarithomic time

    auto it1=st.find(2);
    auto it2=st.find(2);

    st.erase(it1,it2);///porer index a point korbe ekhn

    ///lower bound and upper bound works in the same way as vector

    auto sit=st.lower_bound(2);
    auto dit=st.upper_bound(3);


    return 0;

}
