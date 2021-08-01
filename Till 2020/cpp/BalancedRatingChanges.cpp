#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i,co=0,x,c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
           x=-1*a[i];
           if(x%2!=0) co++;
        }
        else
        {
            if(a[i]%2!=0&&a[i]!=0) co++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            x=-1*a[i];
            if(x%2==0) cout<<a[i]/2<<endl;
            else
            {
                if(c<=(co/2))
                {
                    cout<<ceil(a[i]/2)<<endl;
                    c++;
                }
                else cout<<floor(a[i]/2)<<endl;
            }
        }
        else
        {
            if(a[i]%2==0) cout<<a[i]/2<<endl;
            else
            {
                if(c<(co/2))
                {
                    cout<<ceil(a[i]/2)<<endl;
                    c++;
                }
                else cout<<floor(a[i]/2)<<endl;
            }
        }
    }
}
