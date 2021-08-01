#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k,r,c;
        cin>>n>>m>>k;
        r=n/k;
        if(m==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(r>=m) cout<<m<<endl;
            else
            {
                c=ceil(((m-r)*1.0)/(k-1));
                cout<<r-c<<endl;
            }
        }
    }
}

