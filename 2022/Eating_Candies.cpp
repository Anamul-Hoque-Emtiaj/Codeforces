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
        ll n,x;
        cin>>n;
        list<ll> l;
        for(i=0; i<n; i++)
        {
            cin>>x;
            l.push_back(x);
        }
        ll c=0,al=0,bo=0,co=0;
        while(!l.empty())
        {
            if(al<bo)
            {
                al+=l.front();
                l.pop_front();
                co++;
            }
            else
            {
                bo+=l.back();
                l.pop_back();
                co++;
            }
            if(al==bo)
            {
                c+=co;
                co=0;
                al=0;
                bo=0;
            }
        }
        cout<<c<<endl;
    }
}



