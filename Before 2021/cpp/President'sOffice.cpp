#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,c1=0,fi,fj,li,lj,cn=0;
    char c,p='.',p1='.';
    cin>>n>>m>>c;
    char a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==c)
            {
                c1++;
                if(c1==1)
                {
                    fi=i;
                    fj=j;
                }
                li=i;
                lj=j;
            }
        }
    }
    if(a[fi][fj-1]!='.'&&a[fi][fj-1]!=c&&fj>=1) cn++;
    if(a[li][lj+1]!='.'&&a[li][lj-1]!=c&&lj<m-1) cn++;
    for(i=fj;i<=lj;i++)
    {
        if(a[fi-1][i]!='.'&&a[fi-1][i]!=p&&fi>=1)
        {
            cn++;
            p=a[fi-1][i];
        }
        if(a[li+1][i]!='.'&&a[li+1][i]!=p1&&li<n-1)
        {
            cn++;
            p1=a[fi+1][i];
        }
    }
    cout<<cn<<endl;
}
