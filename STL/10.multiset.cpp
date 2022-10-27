///CODED BY SADMAN MEHEDI SIVAN

#include<bits/stdc++.h>
using namespace std;



int main()
{
    ///can take multioccurances and everything else are same as set

    multiset<int>st;
    st.insert(1);
    st.insert(1);
    st.insert(5);
    st.emplace(2);
    st.emplace(43);
    st.emplace(22);

    st.erase(1);///erases all 1

    int cnt=st.count(1);

    st.erase(st.find(1));///will erase only one


//rest all are same as set;

    return 0;

}
