#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,n,r,m;
        cin>>x>>y>>n;
        m=((n/x)*x)+y;
        if(m>n) r=m-x;
        else r=m;
        cout<<r<<endl;
    }
}

