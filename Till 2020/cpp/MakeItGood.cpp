#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi acos(-1)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,in=1,de=1,i;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            if(a[i]<=a[i+1]) in++;
            else break;

        }
        for(i=n-1;i>0;i--)
        {
            if(a[i]<=a[i-1]) de++;
            else break;
        }
        if(in==n||de==n||in+de==n+1) cout<<"0"<<endl;
        else cout<<n-(in+de)<<endl;
    }
}

