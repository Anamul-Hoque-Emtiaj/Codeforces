#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int d1,d2,d3,a,b;
    cin>>d1>>d2>>d3;
    a=2*(d1+d2);
    b=d1+d2+d3;
    if(a>b) cout<<b<<endl;
    else cout<<a<<endl;
}
