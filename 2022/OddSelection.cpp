#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int oc=0,ec=0;
        for(int i=1; i<=n; i++)
        {
            int v;
            cin>>v;
            if(v%2==0)
                ec++;
            else
                oc++;
        }
        if(oc==0)
            cout<<"No\n";
        else if(ec==0 && x%2==0)
             cout<<"No\n";
        else if(x==n && oc%2==0)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
}


