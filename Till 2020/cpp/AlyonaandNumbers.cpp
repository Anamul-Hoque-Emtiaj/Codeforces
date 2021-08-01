#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int c=0,n,m,i,j,mn,mx;
    cin>>n>>m;
    mn=min(m,n);
    mx=max(n,m);
    for(i=1;i<=mn;i++)
    {
        c=c+((i+mx)/5)-(i/5);
    }
    cout<<c<<endl;
}
