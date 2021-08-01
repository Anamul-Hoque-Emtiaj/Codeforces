#include<bits/stdc++.h>
using namespace std;

struct str
{
    long long int l,r;
};

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,m,i,p;
        cin>>n>>x>>m;
        struct str a[m];
        for(i=1;i<=m;i++)
        {
            cin>>a[i].l>>a[i].r;
            if(a[i].l<=x&&a[i].r>=x) p=i;
        }
        cout<<a[p].r<<endl;
    }
}

