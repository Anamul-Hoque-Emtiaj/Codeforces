#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,r,x,i,c=0;
        cin>>n;
        if(n%2==0)
            cout<<n/2<<" "<<n/2<<endl;
        else
        {
            for(i=3; i*i<=n; i=i+2)
            {
                if(n%i==0)
                {
                    r=i;
                    c=1;
                    break;
                }
            }
            if(c==1)
            {
                x=n/r;
                cout<<x<<' '<<(r-1)*x<<endl;
            }
            else cout<<"1 "<<n-1<<endl;
        }
    }
}

