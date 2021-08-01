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
        ll n,x,y,a,i,d,r,c,in,pre,co=0;
        cin>>n>>x>>y;
        i=n;
        d=y-x;
        r=d/(n-1);
        if(r>n)
        {
            while(r!=n)
            {
                if(r%(d/(i-1))==0)
                {
                    r=d/(i-1);
                    break;
                }
                i++;
            }
            c=r;
        }
        else if(r<n)
        {
            while(r!=n)
            {
                if(r%(d/(i-1))==0)
                {
                    r=d/(i-1);
                    break;
                }
                i--;
            }
            c=r;
        }
        else c=r;
        in=(d/c)+1;
        for(i=x;i<=y;i+=c) cout<<i<<" ";
        pre=(x/c)-1;
        for(i=1;i<=(n-in)&&co<pre;i++)
        {
            co++;
            cout<<x-(c*co)<<" ";
        }
        for(i=1;i<=(n-(in+pre));i++)
            cout<<y+c*i<<" ";
        cout<<endl;
    }
}
