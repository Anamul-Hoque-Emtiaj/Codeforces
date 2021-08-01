#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,p,q;
    cin>>n>>m;
    if(n<m) cout<<"-1"<<endl;
    else
    {
        p=n;
        if(n%2==0) q=n/2;
        else q=n/2+1;
        for(i=q;i<=p;i++)
        {
            if(i%m==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
