#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll arr[n];
        for(ll i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        ll sum=0,ara[n],in=0;
        for(ll i=n-1; i>=0; i--)
        {
            sum+=arr[i];
            ara[in++] = sum;
        }
        while(q--)
        {
            ll v;
            cin>>v;
            if(v>sum)
            {
                cout<<"-1\n";
            }
            else
            {
                 cout<<lower_bound(ara, ara+n, v) - ara + 1<<"\n";
            }
        }
    }
}



