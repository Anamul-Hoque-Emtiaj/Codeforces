#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,c=0,j,c1=0;
    cin>>n;
    long long int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    long long int q[m],x[n];
    for(i=0;i<m;i++)
    {
        cin>>q[i];
    }
    for(i=0;i<n;i++)
    {
        c=c+a[i];
        x[i]=c;
    }
    for(i=0;i<m;i++)
    {
        c1=0;
        for(j=0;j<n;j++)
        {
            c1++;
            if(q[i]<=x[j]) break;
        }
        cout<<c1<<endl;
    }
}
