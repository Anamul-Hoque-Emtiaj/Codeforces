#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int a[n],i,s=0,s1=0,c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        if((s/2)>=s1)
        {
            s1=s1+a[i];
            c++;
        }
        else break;
    }
    cout<<c<<endl;
}
