#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        ll curElm=-1,c=0;
        vector<ll> v;
        for(ll i=0; i<n; i++)
        {
            if(curElm!=arr[i])
            {
                if(c>=k)
                {
                    v.push_back(curElm);
                }
                c=1;
                curElm = arr[i];
            }
            else
                c++;
        }
        if(c>=k)
        {
            v.push_back(curElm);
        }

        if(v.size()==0)
            cout<<"-1\n";
        else
        {
            ll cur = v.front(),maxi=0,l,r;
            c = 1;
            for(ll i=1; i<v.size(); i++)
            {
                if(v[i]==cur+1)
                {
                    c++;
                    cur = v[i];
                }
                else
                {
                    if(c>maxi)
                    {
                        maxi = c;
                        r = cur;
                        l = cur - c + 1;
                    }
                    c=1;
                    cur = v[i];
                }
            }
            if(c>maxi)
            {
                maxi = c;
                r = cur;
                l = cur - c + 1;
            }
            cout<<l<<" "<<r<<"\n";
        }
    }
}



