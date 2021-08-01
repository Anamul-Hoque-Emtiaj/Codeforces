#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j;
        cin>>n>>m;
        ll a[n][m],b[n][m],c=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++) cin>> a[i][j];
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(i==0&&j==0||i==0&&j==m-1||i==n-1&&j==0||i==n-1&&j==m-1) b[i][j]=2;

                else if(i==0||i==n-1||j==0||j==m-1) b[i][j]=3;
                else b[i][j]=4;
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]>b[i][j])
                {
                    c=1;
                    break;
                }
            }
        }
        if(c==0)
        {
            cout<<"YES"<<endl;
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                {
                    cout<<b[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
    }
}

