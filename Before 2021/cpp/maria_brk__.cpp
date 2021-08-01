#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool cmp(ll n1,ll n2)
{
    return n1>n2;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,in,c=1,d,e;
        cin>>n;
        d=n;
        vector<ll>a;
        for(i=1;i<=n;i++)
        {
            cin>>in;
            a.push_back(in);
        }
        sort(a.begin(),a.end());
        for(i=0;i<n;i++)
        {
            if(a[i]<=i+1)
            {
                c++;
            }
            else
                break;
        }
        cout<<c<<endl;
    }
}


