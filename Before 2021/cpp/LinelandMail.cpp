#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,d1,d2,c1,c2;
    cin>>n;
    long long int a[n],i;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<a[1]-a[0]<<' '<<a[n-1]-a[0]<<endl;
        }
        else if(i==n-1)
        {
            cout<<a[n-1]-a[n-2]<<' '<<a[n-1]-a[0]<<endl;
        }
        else
        {
            c1=a[i]-a[i-1];
            c2=a[i+1]-a[i];
            d1=a[i]-a[0];
            d2=a[n-1]-a[i];
            cout<<min(c1,c2)<<' '<<max(d1,d2)<<endl;
        }
    }
}
