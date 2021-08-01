#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n,m,k,t,i,in,jn,j,c=0;
    cin>>n>>m>>k>>t;
    ll a[n][m];
    for(i=1;i<=k;i++)
    {
        cin>>in>>jn;
        a[in-1][jn-1]=-1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!=-1)
            {
                c++;
                a[i][j]=c%3;
            }
        }
    }
    for(i=1;i<=t;i++)
    {
        cin>>in>>jn;
        if(a[in-1][jn-1]==-1) cout<<"Waste"<<endl;
        else if(a[in-1][jn-1]==1) cout<<"Carrots"<<endl;
        else if(a[in-1][jn-1]==2) cout<<"Kiwis"<<endl;
        else if(a[in-1][jn-1]==0) cout<<"Grapes"<<endl;

    }
}
