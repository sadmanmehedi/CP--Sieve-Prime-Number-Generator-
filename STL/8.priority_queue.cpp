///CODED BY SADMAN MEHEDI SIVAN

#include<bits/stdc++.h>
using namespace std;



int main()
{

    priority_queue<int>pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.emplace(5);

///eikhane sob kichu ekta tree er moddhe thake

///normal priority queue hoilo max heap jekhane ascending order a sorted thake
    cout<<pq.top()<<endl;

    pq.pop();

    cout<<pq.top()<<endl;

    ///size and shits

    priority_queue<int,vector<int>,greater<int>>pq2;///descending order min heap

///push and pop happens in logn and top happens in O(1)
    pq2.push(1);
    pq2.push(2);
    pq2.push(3);
    pq2.push(4);
    pq2.emplace(5);

    return 0;

}
