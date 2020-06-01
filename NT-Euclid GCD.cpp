///GCD
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;

    gcd(b,a%b);
}
int main()
 {

    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);

 }
///ITS COMPLEXITY IS SAME AS _gcd(a,b) BUILT IN FUNCTION IN C++
 
 
 
