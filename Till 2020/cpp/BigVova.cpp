#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n],b[n],c,m=0,in,g;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>m)
            {
                m=a[i];
                in=i;
            }
        }
        b[0]=m;
        c=m;
        a[in]=0;
        m=0;
        for(j=1; j<n; j++)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]!=0)
                {
                    g=__gcd(c,a[i]);
                    if(g>m)
                    {
                        m=g;
                        in=i;
                    }
                }
            }
            b[j]=a[in];
            c=m;
            m=0;
            a[in]=0;
        }
        for(i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}
