#include<bits/stdc++.h>
using namespace std;

int main()
{
    double d,h,v,e,r1,r;
    cin>>d>>h>>v>>e;
    r1=acos(-1)*(1.0*d/2)*(1.0*d/2)*e;
    if(r1<v)
    {
        r=(acos(-1)*(1.0*d/2)*(1.0*d/2)*h);
        cout<<"YES"<<endl<<fixed<<setprecision(9)<<(1.0*r)/(v-r1)<<endl;
    }
    else cout<<"NO"<<endl;
}
