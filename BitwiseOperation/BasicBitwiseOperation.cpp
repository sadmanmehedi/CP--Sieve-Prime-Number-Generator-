#include <bits/stdc++.h>
using namespace std;

int main() {

    int x=10,y=20;

    long long p=x|y;//BITWISE OR=0/0=0 0/1=1 1/0=1 1/1=1

    long long q=x&y;///BITWISE AND=0/0=0 0/1=0 1/0=0 1/1=1
    long long r=x^y;///BITWISE XOR=0/0=0 0/1=1 1/0=1 1/1=0

    long long a=~20;///INVERSE KORE DEY/1's Complement
    long long b=20>>2;//RIGHT SHIFT OPERATOR(20 ER BINARY ER LAST 2TA DIGIT OUT HOYE JABE) NEW VALUE 20/2^K ;K=JOITA GHOR RIGHT SHIFT KORTESE
    long long c=20<<2;//LEFT SHIFT OPERATOR(20 ER BINARY ER FIRST 2TA DIGIT BAME 2 GHOR AGAI ASHBE) NEW VALUE 20*2^K ;K=JOITA GHOR LEFT SHIFT KORTESE

    ///RIGHT SHIFT AND LEFT SHIFT IS FASTER THAN NORMAL MULTIPLICATION AND DIVISION

    return 0;

}
