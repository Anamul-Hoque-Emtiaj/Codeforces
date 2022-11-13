#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n,i,mx1=0,mx2=0,v;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>v;
        mx1 = max(mx1,v);
    }
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>v;
        mx2 = max(mx2,v);
    }
    cout<<mx1<<" "<<mx2<<"\n";
}




