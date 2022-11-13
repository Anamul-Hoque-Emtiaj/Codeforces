#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

int main()
{
    ll t=1,i,j,k;
    cin>>t;
    while(t--)
    {
        ll n,a1,a2,v;
        cin>>n>>a1>>a2;
        bool r = true;
        for(i=3; i<=n; i++)
        {
            cin>>v;
            if(i%2==0)
            {
                if(v%2!=a2%2)
                {
                    r = false;
                }
            }
            else
            {
                if(v%2!=a1%2)
                {
                    r = false;
                }
            }
        }
        if(r)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
