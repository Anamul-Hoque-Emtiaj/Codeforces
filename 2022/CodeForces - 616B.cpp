#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    ll r = -1;
    for(int i=0; i<n; i++)
    {
        ll mini = 1000000007;
        for(int j=0; j<m; j++)
        {
            ll t;
            cin>>t;
            mini = min(mini,t);
        }
        r = max(mini,r);
    }
    cout<<r<<endl;
}





