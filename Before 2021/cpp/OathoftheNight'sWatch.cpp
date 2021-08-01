#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,in,i,c=0;
    cin>>n;
    vector<long long int>l;
    for(i=1;i<=n;i++)
    {
        cin>>in;
        l.push_back(in);
    }
    sort(l.begin(),l.end());
    for(i=1;i<n-1;i++)
    {
        if(l[i]>l[0]&&l[i]<l[n-1]) c++;
    }
    cout<<c<<endl;
}
