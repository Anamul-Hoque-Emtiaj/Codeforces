#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

int main()
{
    ll t=1,i,j,k;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        bool r=false;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            ll x = sqrt(arr[i]);
            if(x*x!=arr[i])
                r = true;
        }
        if(r)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}



