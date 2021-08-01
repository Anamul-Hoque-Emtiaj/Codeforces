#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi acos(-1)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,d;
        cin>>a>>b;
        d=max(a,b)-min(a,b);
        if(d%10==0) cout<<d/10<<endl;
        else cout<<d/10+1<<endl;
    }
}

