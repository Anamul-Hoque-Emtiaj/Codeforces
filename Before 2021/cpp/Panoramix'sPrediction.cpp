#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
    if(n%2==0&&n!=2) return 0;
    else
    {
        int i,p=1;
        for(i=3;i<n/2;i=i+2)
        {
            if(n%i==0)
            {
                p=0;
                break;
            }
        }
        if(p==1) return 1;
        else return 0;
    }
}

int main()
{
    int f,l,j,x,q=1;
    cin>>f>>l;
    if(prime(l)==1&&prime(f)==1)
    {
        for(j=f+1;j<l;j++)
        {
            x=prime(j);
            if(x==1)
            {
                q=0;
                break;
            }
        }
        if(q==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
}
