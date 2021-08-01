#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,n,m1,m,d;
        cin>>a>>b>>c>>n;
        m1=max(a,b);
        m=max(m1,c);
        d=(m-a)+(m-b)+(m-c);
        if(n>=d)
        {
            if((a+b+c+n)%3==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}

