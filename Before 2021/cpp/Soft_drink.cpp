#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,x,y,z,m1,m;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=(k*l)/(n*nl);
    y=p/(n*np);
    z=(c*d)/n;
    m1=min(x,y);
    m=min(m1,z);
    cout<<m<<endl;
}
