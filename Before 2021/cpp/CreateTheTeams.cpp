#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,c=0,it=1;
        cin>>n>>m;
        ll a[n];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,cmp);
        for(i=0;i<n;i++)
        {
            if(a[i]*it>=m)
            {
                c++;
                it=1;
            }
            else it++;
        }
        cout<<c<<endl;
    }
}

