#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int32_t main()
{
    ll n,c=0,s=0,z=0;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
            c++;
        if(arr[i]==0)
            z++;
        s+=abs(abs(arr[i])-1);
    }
    if(c%2==0)
        cout<<s<<"\n";
    else
    {
        if(z>0)
            cout<<s<<"\n";
        else
            cout<<s+2<<"\n";
    }
}
