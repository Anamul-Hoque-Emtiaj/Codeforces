#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll k, ans,v;
        cin>>n>>k>>ans;
        for(int i=2; i<=n; i++)
        {
            cin>>v;
            ans = (ans & v);
        }
        if(ans<k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}



