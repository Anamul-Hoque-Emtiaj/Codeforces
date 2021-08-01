#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,i,p,af,m,c;
    cin>>n>>a;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    p=a-1;
    af=n-a;
    m=min(p,af);
    if(ar[a-1]==1) c=1;
    else c=0;
    for(i=0;i<=a-m-2;i++)
    {
        if(ar[i]==1) c++;
    }
    for(i=1;i<=m;i++)
    {
        if(ar[a-1-i]==ar[a-1+i]&&ar[a-1-i]==1) c=c+2;
    }
    for(i=a+m;i<n;i++)
    {
        if(ar[i]==1) c++;
    }
    cout<<c<<endl;
}
