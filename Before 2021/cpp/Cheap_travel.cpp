#include<iostream>
using namespace std;

int  main()
{
    int n,m,a,b,t;
    cin>>n>>m>>a>>b;
    if((b/m)<a)
    {
        t=n/m;
        if(b<a) cout<<(t+1)*b<<endl;
        else
        cout<<(t*b+(n-(t*m))*a)<<endl;
    }
    else cout<<n*a<<endl;
}
