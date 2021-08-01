#include<bits/stdc++.h>
using namespace std;

int  main()
{
    long long int k2,k3,k5,k6,m,c,d,m1,e;
    cin>>k2>>k3>>k5>>k6;
    m=min(k5,k6);
    if(m<k2)
    {
        c=m*256;
        d=k2-m;
        m1=min(d,k3);
        e=c+m1*32;
        cout<<e<<endl;
    }
    else cout<<k2*256<<endl;
}
