#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int a[n],i,x,y;
    for(i=0;i<n;i++) cin>>a[i];
    cin>>m;

    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        if(x!=n) a[x]=a[x]+(a[x-1]-y);
        if(x!=1) a[x-2]=a[x-2]+(y-1);
        a[x-1]=0;

    }
    for(i=0;i<n;i++) cout<<a[i]<<endl;
}
