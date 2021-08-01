#include<bits/stdc++.h>
using namespace std;

struct matchbox
{
    long long int a;
    int b;
};

bool cmp(matchbox x1,matchbox y1)
{
    return x1.b>y1.b;
}

int main()
{
    long long int n,m,i,am=0;
    cin>>n>>m;
    struct matchbox x[m];
    for(i=0; i<m; i++)
    {
        cin>>x[i].a>>x[i].b;
    }
    sort(x,x+m,cmp);

    for(i=0; i<m; i++)
    {
        if(n>=x[i].a)
        {
            am=am+x[i].a*x[i].b;
            n=n-x[i].a;
        }
        else
        {
            am=am+n*x[i].b;
            break;
        }
    }
    cout<<am<<endl;
}
