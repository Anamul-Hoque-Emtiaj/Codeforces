#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i,j,c=1,m=0,k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j>=1;j--)
        {
            if(a[j]>=a[j-1]) c++;
            else break;
        }
        for(k=i;k<n-1;k++)
        {
             if(a[k]>=a[k+1]) c++;
             else break;
        }
        if(c>m) m=c;
        c=1;
    }
    cout<<m<<endl;
}
