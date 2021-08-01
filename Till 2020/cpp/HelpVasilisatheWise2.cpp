#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int r1,r2,c1,c2,d1,d2,a,b,c,d,mx,c3,d3;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    c3=(r2+d2-c2);
    if(c3%2==0) c=c3/2;
    else c=-1;
    d3=(r2-d2+c2);
    if(d3%2==0) d=d3/2;
    else d=-1;
    b=c2-d;
    a=r1-b;
    list<int>x;
    x.push_back(a);
    x.push_back(b);
    x.push_back(c);
    x.push_back(d);
    x.sort();
    x.unique();
    mx=max(a,max(b,max(c,d)));
    if(a>0&&b>0&&c>0&&d>0&&mx<10&&x.size()==4) cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;
    else cout<<"-1"<<endl;
}
