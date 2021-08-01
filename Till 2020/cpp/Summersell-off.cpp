#include<bits/stdc++.h>
using namespace std;

#define ll long long int

struct pr
{
    ll k,l;
};

bool cmp(pr x,pr y)
{
    return x.l>y.l;
}


struct pr1
{
    ll k1,l1;
};

bool cmp1(pr1 x,pr1 y)
{
    return x.k1>y.k1;
}


int main()
{
    ll n,f,i,c=0,s=0,p,s1=0,c1=0,p1;
    cin>>n>>f;
    struct pr a[n];
    struct pr1 b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i].k>>a[i].l;
        b[i].k1=a[i].k;
        b[i].l1=a[i].l;
    }
    sort(a,a+n,cmp);
    sort(b,b+n,cmp1);
    for(i=0;i<n;i++)
    {
        if(a[i].k>a[i].l)
            s=s+a[i].l;
        else
        {
             p=a[i].k;
            if(c<f&&p!=0)
            {
                c++;
                if(2*p>=a[i].l)
                {
                     s=s+a[i].l;
                }
                else s=s+a[i].k*2;
            }
            else s=s+a[i].k;
        }
    }

    for(i=0;i<n;i++)
    {
        if(b[i].k1>b[i].l1)
            s1=s1+b[i].l1;
        else
        {
            p1=b[i].k1;
            if(c1<f&&p1!=0)
            {

                c1++;
                if(2*p1<=b[i].l1)
                {

                     s1=s1+2*p1;
                }
                else s1=s1+b[i].l1;
            }
            else s1=s1+b[i].k1;
        }
    }
    cout<<max(s,s1)<<endl;
}
