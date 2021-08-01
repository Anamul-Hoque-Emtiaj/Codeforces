#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,x,y,i,j,s=0,p,q,c1=0,c2=0;
        cin>>n>>m>>x>>y;
        char a[n][m];
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='.') c1++;
            }
        }
        if(2*x<=y)
        {
            cout<<c1*x<<endl;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<m;)
                {
                    if(a[i][j]=='.'&&a[i][j+1]=='.'&&j<m-1)
                    {
                        s=s+y;
                        j=j+2;
                    }
                    else if(a[i][j]=='.')
                    {
                        s=s+x;
                        j++;
                    }
                    else j++;
                }
            }
            cout<<s<<endl;
        }
    }
}

