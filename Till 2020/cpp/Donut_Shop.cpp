#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,p1,p2,p=-1,q=1;
        cin>>a>>b>>c;
        p1=a*b;
        p2=a;
        if(p2>=c)
        {
            cout<<p<<' '<<b<<endl;
        }
        else if(p1<=c) cout<<q<<' '<<p<<endl;
        else if(p1>c&&p2<c) cout<<q<<' '<<b<<endl;


    }
}

