#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0) a[i]=(-1)*a[i];
        }
        cout<<a[0]<<' ';
        for(i=1;i<n;i++)
        {
            if(i%2!=0)cout<<(-1)*a[i]<<' ';
            else cout<<a[i]<<' ';
        }
        cout<<endl;
    }
}

