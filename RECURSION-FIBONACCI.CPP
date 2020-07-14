///RESOURCE:https://www.youtube.com/watch?v=B0NtAFf4bvU

///USING RECURSION TO FIND OUT FIBONACCI SERIES VALUE

#include<bits/stdc++.h>
using namespace std;

long long fib(long long n)
{
    if(n>=3)///RECURSIVE CASE
        return fib(n-1)+fib(n-2);
   
    else ///BASE CASE
        return 1;

}

int main()
{

    long long n;
   
    cin>>n;
    
    cout<<fib(n);
    
    return 0;
}
