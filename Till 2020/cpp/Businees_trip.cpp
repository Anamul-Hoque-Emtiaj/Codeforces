#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,a[12],i,s=0,c=0;
    cin>>k;
    for(i=0;i<12;i++)
    {
        cin>>a[i];
    }
    sort(a,a+12);
    for(i=11;i>=0&&s<k;i--)
    {
        s=s+a[i];
        c++;
    }
    if(s>=k) cout<<c<<endl;
    else cout<<"-1"<<endl;
}
