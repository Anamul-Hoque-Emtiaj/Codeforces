#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int x[n],i;
    for(i=0;i<n;i++) cin>>x[i];
    long long int q,j;
    cin>>q;
    long long int m[q],c;
    for(j=0;j<q;j++) cin>>m[j];
    for(j=0;j<q;j++)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(x[i]<=m[j]) c++;
        }
        cout<<c<<endl;
    }
}
