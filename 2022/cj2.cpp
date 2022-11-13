#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

int main()
{
    ll t=1,i,j,k;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        ll n,z;
        cin>>n>>z;
        ll s=0,arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }
        ll p=0,q=0;
        for(i=0; i<n; i++)
        {
            q+=arr[i];
            p+=(arr[i]*(s-q));
        }
        if(s!=0)
        {
            ll x = -1*(p/s);
            if((x*s+p)==0)
                cout<<"Case #"<<k<<": "<<x<<endl;
            else
                cout<<"Case #"<<k<<": "<<"IMPOSSIBLE"<<endl;
        }
        else{
            if(n==1)
                cout<<"Case #"<<k<<": "<<"1"<<endl;
            else
                cout<<"Case #"<<k<<": "<<"IMPOSSIBLE"<<endl;
        }
    }
}



