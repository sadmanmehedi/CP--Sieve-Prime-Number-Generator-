///CODED BY SADMAN MEHEDI SIVAN

#include<bits/stdc++.h>
using namespace std;



int main()
{
    ///FIFO
    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);
///everything happens in O

    cout<<q.back()<<endl;

    cout<<q.front()<<endl;

    q.pop();

    cout<<q.front()<<endl;

    ///size and shits

    return 0;

}
