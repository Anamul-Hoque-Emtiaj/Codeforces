#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,d,x=0;
    cin>>n;
    char a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        d=abs((a[i]-'0')-(b[i]-'0'));
        if(d>5) x=x+(10-d);
        else x=x+d;
    }
    cout<<x<<endl;
}
