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
        ll n,k,z,i;
        cin>>n>>k>>z;
        ll a[n],b[k+1],mx=0,mxp,s=0,s1=0,x,y,x1,y1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(i<=k)
            {
                b[i]=a[i];
               if(mx<b[i])
               {
                   mx=b[i];
                   mxp=i;
               }
               s=s+b[i];
            }
        }
        if(b[mxp-1]>b[mxp+1])
        {
            for(i=0;i<=mxp;i++)
            {
                s1=s1+b[i];
            }
            x=(k-mxp)/2;
            y=(k-mxp)-x;
            if(y<=z)
            {
                s1=s1+y*b[mxp]+x*b[mxp-1];
                cout<<max(s,s1)<<endl;
            }
            else
            {
                y1=(k-mxp)-2*z;
                s1=s1+z*b[mxp]+z*b[mxp-1];
                for(i=mxp+1;i<=mxp+y1;i++) s1=s1+b[i];
                cout<<max(s,s1)<<endl;
            }
        }
        else
        {
            for(i=0;i<=mxp+1;i++)
            {
                s1=s1+b[i];
            }
            x=(k-mxp-1)/2;
            y=(k-mxp-1)-x;
            if(y<=z)
            {
                s1=s1+y*b[mxp]+x*b[mxp-1];
                cout<<max(s,s1)<<endl;
            }
            else
            {
                y1=(k-mxp-1)-2*z;
                s1=s1+z*b[mxp]+z*b[mxp-1];
                for(i=mxp+2;i<=mxp+y1+1;i++) s1=s1+b[i];
                cout<<max(s,s1)<<endl;
            }
        }
    }
}

