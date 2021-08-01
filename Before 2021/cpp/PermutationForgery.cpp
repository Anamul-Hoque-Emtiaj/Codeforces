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
        ll n;
        cin>>n;
        ll p[n],i;
        for(i=0;i<n;i++)
        {
            cin>>p[i];
        }
        if(n%2==0)
        {
            for(i=1;i<n;i=i+2)
            {
                cout<<p[i]<<" "<<p[i-1]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<p[n-3]<<" "<<p[n-2]<<" "<<p[n-1]<<" ";
            for(i=0;i<n-3;i++)
            {
                cout<<p[i]<<" ";
            }
            cout<<" ";
        }
    }
}
