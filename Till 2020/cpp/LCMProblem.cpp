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
        ll l,r,a;
        cin>>l>>r;
        a=2*l;
        if(a<=r) cout<<l<<" "<<l*2<<endl;
        else cout<<"-1 -1"<<endl;
    }
}

