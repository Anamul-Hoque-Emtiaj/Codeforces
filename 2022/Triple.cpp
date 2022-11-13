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
        for(i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        vector<ll> v;
        ll c=0,va=0;
        for(i=0; i<n; i++)
        {
            if(arr[i]==va)
            {
                c++;
            }
            else
            {
                if(c>=3)
                    v.push_back(va);
                va = arr[i];
                c=1;
            }
        }
        if(c>=3)
            v.push_back(va);
        if(v.empty())
            cout<<"-1"<<endl;
        else
        {
           cout<<v[0]<<endl;
        }
    }
}
