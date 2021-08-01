#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c2=0,c3=0,c=0;
        cin>>n;
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        while(n!=1)
        {
            if(n%3==0)
            {
                n=n/3;
                c3++;
            }
            else if(n%2==0)
            {
                n=n/2;
                c2++;
            }
            else
            {
                c++;
                break;
            }
        }
        if(c!=0) cout<<"-1"<<endl;
        else
        {
            if(c2>c3) cout<<"-1"<<endl;
            else
            {
                cout<<c3+(c3-c2)<<endl;
            }
        }
    }
}

