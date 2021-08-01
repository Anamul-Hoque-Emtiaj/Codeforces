#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n,i,c=0,f=1,f1,l1,j;
    cin>>n;
    ll a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            c++;
            if(c==1)
                f1=i;
            l1=i;
        }
    }
    for(i=f1;i<l1;i++)
    {
        if(b[i]<b[i+1]&&c!=0)
        {
            f=0;
            break;
        }
    }
    if(f==0) cout<<"no"<<endl;
    else
    {
        if(c==0) cout<<"yes"<<endl<<1<<" "<<1<<endl;
        else cout<<"yes"<<endl<<f1+1<<" "<<l1+1<<endl;
    }
}
