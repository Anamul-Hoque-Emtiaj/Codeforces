#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int a,b,p,q;
        cin>>a>>b;
        p=max(a,b);
        q=min(a,b);
        if(p<=2*q) cout<<q*q*4<<endl;
        else cout<<p*p<<endl;
    }
}

