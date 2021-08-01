#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n,k,i,s,m=0,in=1,d;
    cin>>n>>k;
    d=n-k;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<k;i++)
    {
        m=m+a[i];
    }
    s=m;
    for(i=0;i<d;i++)
    {
        s=s-a[i]+a[k+i];
        if(s<m)
        {
            m=s;
            in=i+2;
        }
    }
    cout<<in<<endl;
}
