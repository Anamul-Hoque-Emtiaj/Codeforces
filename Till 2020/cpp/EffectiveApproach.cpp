#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,c1=0,c2=0,q;
    cin>>n;
    ll pos[n+1],i,num;
    for(i=0;i<n;i++)
    {
        cin>>num;
        pos[num]=i+1;
    }
    ll m;
    cin>>m;
    ll a[m];
    for(i=1;i<=m;i++)
    {
        ll in;
        cin>>in;
        c1=c1+pos[in];
        c2=c2+n-pos[in]+1;
    }
    cout<<c1<<" "<<c2;
}
