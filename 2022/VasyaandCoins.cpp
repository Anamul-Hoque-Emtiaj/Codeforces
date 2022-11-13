#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==0)
            cout<<"1\n";
        else
            cout<<a+2*b+1<<endl;
    }
}



