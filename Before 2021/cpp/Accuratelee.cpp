#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,f0,f1,l0,l1,c0=0,c1=0,c;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                c1++;
                l1=i;
                if(c1==1) f1=i;
            }
            else
            {
                c0++;
                l0=i;
                if(c0==1) f0=i;
            }
        }
        if(c0==0||l0<f1||c0==n)
        {
            cout<<s<<endl;
        }
        else
        {
            if(l1<l0)
            {
                cout<<"0";
                if(f0<f1)
                {
                    c=f1-f0;
                    while(c--) cout<<"0";
                }
                cout<<endl;
            }
            else
            {
                if(f0<f1)
                {
                    c=f1-f0;
                    while(c--) cout<<"0";
                }
                for(i=l0;i<n;i++) cout<<s[i];
                cout<<endl;
            }
        }
    }
}

