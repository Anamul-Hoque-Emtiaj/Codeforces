#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,n;
    cin>>n;
    long long int a[n],b[n],c1=0,f,j,x=0,y,mx;
    list<int>c;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>c1)
        {
            c1=a[i];
            c.push_front(c1);
        }
    }
    c.sort();
    for(i=0;i<n;i++)
    {
        mx=c.back();
        if(a[i]<mx) cout<<endl;
        else
        {
            c.pop_back();
            if(!c.empty())y=c.back();
            else y=0;
            for(i=n-1;i>=0;i--)
            {
                if(b[i]<=mx&&b[i]>y)
                {
                    cout<<b[i]<<" ";

                }
            }
            cout<<endl;
        }
    }
}
