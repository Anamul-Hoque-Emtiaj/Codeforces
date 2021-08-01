#include<iostream>
using namespace std;
int main()
{
    int n,t,i,c=0,r;
    cin>>n>>t;
    int a[n-1];
    for(i=0;i<n-1;i++) cin>>a[i];
    for(i=0;i<n-1;)
    {
        r=i+1+a[i];
        i=r-1;
        if(r==t)
        {
            c=1;
            break;
        }
        if(r>t) break;
    }
    if(c==1) cout<<"YES";
    else cout<<"NO";
}
