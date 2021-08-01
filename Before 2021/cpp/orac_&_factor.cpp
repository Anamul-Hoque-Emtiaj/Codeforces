#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,x;
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<n+k*2<<endl;
        }
        else
        {
            for(i=3;i<=n;i=i+2)
            {
                if(n%i==0)
                {
                    x=i;
                    break;
                }
            }
            cout<<x*2+2*(k-1)<<endl;
        }
    }
}//7 535294320;

