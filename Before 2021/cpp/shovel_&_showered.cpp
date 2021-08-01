#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,x,y;
        cin>>a>>b;
        x=min(a,b);
        y=max(a,b);
        if(x*2<=y) cout<<x<<endl;
        else cout<<(x+y)/3<<endl;
    }
}

