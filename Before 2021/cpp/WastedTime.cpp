#include<bits/stdc++.h>
using namespace std;

struct abc
{
    double x,y;
};

double dis(double x1,double y1,double x2,double y2)
{
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

int main()
{
    int n,k,i;
    double s=0,ans;
    cin>>n>>k;
    struct abc a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    for(i=1;i<n;i++)
    {
        s=s+dis(a[i].x,a[i].y,a[i+1].x,a[i+1].y);
    }
    ans=(s/50)*k;
    cout<<fixed<<setprecision(9)<<ans<<endl;
}
