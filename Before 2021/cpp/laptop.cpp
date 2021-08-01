#include<bits/stdc++.h>
using namespace std;

struct str
{
    long long int a,b;
};

bool cmp(str p,str q)
{
    return p.a<q.a;
}

int main()
{
    long long int n,i,c=0;
    cin>>n;
    struct str x[n];
    for(i=1;i<=n;i++)
    {
        cin>>x[i].a>>x[i].b;
    }
    sort(x,x+n,cmp);
    for(i=1;i<=n;i++)
    {
        cout<<x[i].a<<" "<<x[i].b<<endl;
    }
}
