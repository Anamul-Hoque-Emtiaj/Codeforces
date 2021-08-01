#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int a[n],i,c=0,d,r,e;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    r=a[0];
    for(i=0;i<n-1;i++)
    {
        d=a[i]-a[i+1];
        if(d>=0)
        {
            c=c+d;
        }
        else
        {
            e=c+d;
            if(e>=0)
            {
                c=c+d;
            }
            else
            {
                e=e*(-1);
                r=r+e;
                c=0;
            }
        }
    }
    cout<<r<<endl;
}
