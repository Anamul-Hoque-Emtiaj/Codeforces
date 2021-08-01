#include<bits/stdc++.h>
using namespace std;

struct abc
{
    int b,a;
};
int main()
{
    int n,i,c=0,c1=0;
    cin>>n;
    struct abc x[n];
    for(i=1;i<=n;i++)
    {
        cin>>x[i].b>>x[i].a;
        if(x[i].b!=x[i].a) c++;
        if(x[i].b>x[i-1].b&&i>1) c1++;
    }
    if(c1==0&&c==0) cout<<"maybe"<<endl;
    else if(c!=0) cout<<"rated"<<endl;
    else if(c==0&&c1!=0) cout<<"unrated"<<endl;
}
