#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long unsigned int a,b,p,q,d,c=0,e,f;
        cin>>a>>b;
        p=max(a,b);
        q=min(a,b);
        if(p%q==0)
        {
            if(p==q)
            {
                cout<<"0"<<endl;
                continue;
            }
            d=p/q;
            if(d%2!=0) cout<<"-1"<<endl;
            else
            {
                e=log2(d);
                f=pow(2,e);
                if(f!=d) cout<<"-1"<<endl;
                else
                {
                    cout<<(e/8)+(e%8/4)+(e%8%4/2)<<endl;
                }
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}

