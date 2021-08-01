#include<iostream>
using namespace std;
int main()
{
    int n,m,d,e;
    cin>>n>>m;
    if(n>=m)
    {
        d=n-m;
        e=d/(m-1);
        if(d%(m-1)==0) cout<<n+e+1;
        else cout<<m+e*(m-1)+e+1+d%(m-1);

    }
    else cout<<n;

}
