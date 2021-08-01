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
        ll n,c=1,c1=0,a1;
        cin>>n;
        ll a[n],i;
        a1=n+1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=1)
            {
                c1++;
                if(c1==1) a1=i;
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]==1)
            {
                if(i<a1) c++;
            }
            else
                c=c+2;
        }
        if(c%2==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
}

