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
        ll l,r,m,x1,r1,a,b,c,x,y;
        cin>>x1>>y>>m;
        l=min(x1,y);
        r=max(x1,y);
        if(m>l)
        {
            x=m/l;
            r1=m-(x*l);
            a=l;
            b=r;
            c=r-r1;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else
        {
            a=l;
            r1=l-m;
            c=r;
            b=r-r1;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
}

