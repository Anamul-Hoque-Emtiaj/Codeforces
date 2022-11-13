#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>k>>m;
    string str[n];
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    map<string,ll> mp;
    for(int i=0; i<n; i++)
    {
        ll v;
        cin>>v;
        mp[str[i]] = v;
    }
    while(k--)
    {
        int x;
        cin>>x;
        int ara[x];
        ll mini = 1000000007;
        for(int i=0; i<x; i++)
        {
            cin>>ara[i];
            if(mp[str[ara[i]-1]]< mini)
                mini = mp[str[ara[i]-1]];
        }
        for(int i=0; i<x; i++)
        {
            mp[str[ara[i]-1]] = mini;
        }
    }
    ll c=0;
    while(m--)
    {
        string s;
        cin>>s;
        c+=mp[s];
    }
    cout<<c<<"\n";
}



