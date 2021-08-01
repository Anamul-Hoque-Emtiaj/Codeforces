#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d,x,y,z;
        cin>>a>>b>>c>>d;
        if(a<=b) cout<<b<<endl;
        else
        {
            if(c<=d) cout<<"-1"<<endl;
            else
            {
                x=a-b;
                y=c-d;
                z=ceil((double)(1.0*x/y));
                cout<<b+z*c<<endl;
            }
        }
    }
}

