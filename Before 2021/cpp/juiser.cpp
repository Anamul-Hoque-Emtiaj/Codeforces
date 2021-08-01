#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,b,d,s=0,c=0;
    cin>>n>>b>>d;
    long int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=b) s=s+a[i];
    }
    while(s>d)
    {
        s=s-d;
        c++;
    }
    cout<<c<<endl;
}
