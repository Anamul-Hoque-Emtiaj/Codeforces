#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        if(n==1)
        {
            if(arr[0]<=1)
                cout<<"YES\n";
            else
               cout<<"NO\n";
        }
        else if(arr[n-1]-arr[n-2]<=1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}




