//PROBLEM LINK:UVA 713
//LEARN:https://www.geeksforgeeks.org/sum-two-large-numbers/


///HELLO THERE~!
///CREATED BY MD SADMAN MEHEDI SIVAN(IUT CSE[SWE'19])

#include<bits/stdc++.h>
using namespace std;

#define FASTIO          ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define READ            freopen("blue.txt","r",stdin);
#define WRITE           freopen("red.txt","w",stdout);

using ll=long long;
using ull=unsigned long long;
const double pi = 2*acos(0.0);
const long long MX = 2e5+7;


string sum(string a,string b)
{
    if(a.size()>b.size())
        swap(a,b);

    string result="";

    long long n1=a.size(),n2=b.size();

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    long long carry=0;

    for(long long i=0; i<n1; i++)
    {
        long long res=(a[i]-'0')+(b[i]-'0')+carry;
        result.push_back(res%10+'0');

        carry=res/10;
    }

    for(long long i=n1; i<n2; i++)
    {
        long long res=(b[i]-'0')+carry;
        result.push_back(res%10+'0');
        carry=res/10;
    }

    if(carry)
        result.push_back(carry+'0');

    return result;
}

int main()
{
    long long t;
    cin>>t;
    
    
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        string f=sum(a,b);
        
        
        for(ll i=0;i<f.size();i++)
        {
            if(f[i]=='0')
            {
                f.erase(f.begin()+i);
                i--;
            }
            
            else
                break;

        }
        
        cout<<f<<endl;

    }


    return 0;

}
