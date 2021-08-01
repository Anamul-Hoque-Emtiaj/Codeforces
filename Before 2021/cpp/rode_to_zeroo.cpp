#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,a,b,r;
        cin>>x>>y>>a>>b;
        if(b<2*a)
        {
            if(x>y) r=y*b+(x-y)*a;
            else if(x==y) r=x*b;
            else r=x*b+(y-x)*a;
        }
        else r=x*a+y*a;
        cout<<r<<endl;
    }
}
