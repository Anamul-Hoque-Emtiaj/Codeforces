#include<bits/stdc++.h>
using namespace std;

struct pb
{
    long int l,r;
};

int main()
{
    long long int n,k,i,s=0;
    cin>>n>>k;
    struct pb a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i].l>>a[i].r;
        s=s+a[i].r-a[i].l+1;
    }
    if(s%k==0) cout<<"0"<<endl;
    else
    {
        cout<<(((s/k)+1)*k)-s<<endl;
    }
}
