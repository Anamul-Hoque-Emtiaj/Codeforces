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
        ll n,m;
        cin>>n>>m;
        char arr[n][m];
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        for(j=m-1; j>=0; j--)
        {
            ll f=-1;
            for(i=n-1; i>=0; i--)
            {
                if(arr[i][j]=='.')
                {
                    if(i>f)
                        f=i;
                }
                else if(arr[i][j]=='*')
                {
                    if(i<f)
                    {
                        swap(arr[i][j],arr[f][j]);
                        f--;
                    }
                }
                else
                {
                    f=-1;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
}



