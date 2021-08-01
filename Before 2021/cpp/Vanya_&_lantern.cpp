#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    long long int l,n,i;
    double c,m2=0,m1,m3,m;
    cin>>n>>l;
    long long int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    m1=a[0]*1.00;
    m3=(l-a[n-1])*1.00;
    for(i=1;i<n;i++)
    {
        c=(a[i]-a[i-1])*1.00/2;
        if(c>m2) m2=c;
    }
    m=max(m1,max(m2,m3));
    cout<<fixed;
    cout<<setprecision(10);
    cout<<m<<endl;
}
