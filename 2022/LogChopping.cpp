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
        ll n;
        cin>>n;
        ll x,c=0;
        for(i=0; i<n; i++)
        {
            cin>>x;
            if(x>1)
            {
                if(x%2==0)
                    c++;
                else
                    c+=2;
            }
        }
        if(c%2==0)
            cout<<"maomao90\n";
        else
            cout<<"errorgorn\n";
    }
}



