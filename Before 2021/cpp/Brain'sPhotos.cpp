#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,i,j,p=0;
    cin>>n>>m;
    char a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            {
                if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
                {
                    p=1;
                    break;
                }
            }
    }
    if(p==1) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}
