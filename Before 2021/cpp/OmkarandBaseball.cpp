#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,c=0,in=0,c1=0;
        cin>>n;
        ll a[n],b[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
            if(a[i]<a[i-1])
            {
                c++;
                in=i;
            }
        }
        sort(b,b+n);
        if(in==0) cout<<"0"<<endl;
        else
        {
            for(i=0; i<=in; i++)
            {
                if(a[i]==b[i]) c1++;
            }
            cout<<c1+1<<endl;
        }
    }
}

