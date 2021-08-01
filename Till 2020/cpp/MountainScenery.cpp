#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m;
    cin>>n>>k;
    m=2*n+1;
    int a[m],i;
    for(i=0;i<m;i++) cin>>a[i];
    for(i=0;i<m;i++)
    {
        if((i+1)%2==0)
        {
            if((a[i]-1)>a[i-1]&&(a[i]-1)>a[i+1]&&k>0)
            {
                cout<<a[i]-1<<" ";
                k--;
            }
            else cout<<a[i]<<" ";
        }
        else cout<<a[i]<<" ";
    }
}
