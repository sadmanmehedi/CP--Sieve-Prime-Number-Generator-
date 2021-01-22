#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]= {10,8,7,5,4,2,1,3,9,6};

    for(int i=0; i<10; i++)
    {
        cout<<a[i]<<endl;
    }


    while(1)
    {
        int count=0;
        
        for(int i=0,j=1; j<10; i++,j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
                count++;
            }
        }
        
        if(count==0)
            break;
    }

    for(int i=0; i<10; i++)
    {
        
        cout<<a[i]<<endl;
    
    }

    return 0;
    
}
