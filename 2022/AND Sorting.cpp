#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll t,i,j,k;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],arr2[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            arr2[i] = arr[i];
        }
        sort(arr2,arr2+n);
        bitset<31> bt;
        bt.set();
        ll ans =(ll) bt.to_ulong();
        for(i=0; i<n; i++)
        {
            if(arr2[i]!=arr[i])
            {
                ans = ans & arr2[i];
            }
        }
        cout<<ans<<endl;
    }
}




