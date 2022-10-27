///CODED BY SADMAN MEHEDI SIVAN

#include<bits/stdc++.h>
using namespace std;



int main()
{
    ///main subidha eikhane push and pop can be done from front part also
    ///but indexwise iterate kora jayna
    ///front e push er complexity onek kom then vector er insert

    list<int>ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);//{5,2,4}

    ls.emplace_front();//{2,4};


    return 0;

}
