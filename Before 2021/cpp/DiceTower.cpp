#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i,a=1;
    cin>>n>>x;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if(p+q==7||p==x||p==7-x||q==x||q==7-x)
        {
            a=0;
            break;
        }
    }
    if(a==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
