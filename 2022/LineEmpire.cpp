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
        ll n,a,b;
        cin>>n>>a>>b;
        ll arr[n+1],sum[n+1];
        arr[0] = 0;
        sum[0] = 0;
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
            sum[i] = sum[i-1]+arr[i];
        }
        ll mn = sum[n]*b;
        for(i=1; i<n; i++)
        {
            ll r = arr[i]*b + arr[i]*a + (sum[n]-sum[i]-arr[i]*(n-i))*b;
            mn = min(mn,r);
        }
        cout<<mn<<endl;
    }
}

