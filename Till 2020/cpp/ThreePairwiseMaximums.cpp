#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi acos(-1)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,z,a,b,c;
        cin>>x>>y>>z;
        list<int>li;
        li.push_back(x);
        li.push_back(y);
        li.push_back(z);
        li.sort();
        li.unique();
        if(li.size()<=2)
        {
            if(x==y&&z<=x)
            {
                a=x;
                b=z;
                c=z;
                cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
            }
            else if(x==z&&y<=x)
            {
                b=x;
                a=y;
                c=a;
                cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
            }
            else if(y==z&&x<=y)
            {
                c=y;
                a=x;
                b=a;
                cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}

