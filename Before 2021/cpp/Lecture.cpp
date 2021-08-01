#include<bits/stdc++.h>
using namespace std;

struct str1
{
    string a,b,c;
};
struct str2
{
    string d;
};

int main()
{
    int n,m,l1,l2,j,i;
    cin>>n>>m;
    struct str1 x[m];
    struct str2 y[n];
    for(i=1;i<=m;i++)
    {
        cin>>x[i].a>>x[i].b;
        l1=x[i].a.size();
        l2=x[i].b.size();
        if(l2>l1) x[i].c=x[i].b;
        else if(l1>=l2) x[i].c=x[i].a;
        cout<<x[i].c<<endl;
    }
    /*for(i=1;i<=n;i++)
    {
        cin>>y[i].d;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(y[i].d==x[j].a)
            {
                cout<<x[j].c<<" ";
                break;
            }
        }
    }*/
}
