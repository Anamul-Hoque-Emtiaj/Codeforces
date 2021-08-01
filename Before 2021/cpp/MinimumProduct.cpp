#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,a,b,x,y,n,a1,b1,a2,b2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;
        a1=max(a-n, x);
		b1=max(y, b-(n-(a-a1)));
		a2=max(b-n, y);
		b2=max(x, a-(n-(b-a2)));
		cout<<min(a1*b1,a2*b2)<<endl;
    }
    return 0;
}
