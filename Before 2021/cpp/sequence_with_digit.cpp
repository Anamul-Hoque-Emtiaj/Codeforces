#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long unsigned int a,k,r,mx,mn,m,b;
        cin>>a>>k;
        m=k-1;
        while(m--)
        {
            mx=a%10;
            mn=a%10;
            b=a;
            while(b!=0)
            {
                r=b%10;
                if(r>mx) mx=r;
                if(r<mn) mn=r;
                b=b/10;
            }
            a=a+mx*mn;
        }
        cout<<a<<endl;
    }
}

