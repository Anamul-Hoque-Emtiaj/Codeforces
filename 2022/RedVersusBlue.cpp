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
        ll n,r,b,x=0;
        cin>>n>>r>>b;
        ll f = floor(r*1.00/(b+1));
        ll c = r - f*(b+1);
        string str = "";
        for(i=1; i<=b; i++)
        {
            for(j=1; j<=f; j++)
            {
                if(x<r)
                {
                    str+="R";
                    x++;
                }
            }
            if(i<=c)
            {
                str+="R";
                x++;
            }
            str+="B";
        }
        x = r-x;
        for(j=1; j<=x; j++)
            str+="R";
        cout<<str<<endl;
    }
}


