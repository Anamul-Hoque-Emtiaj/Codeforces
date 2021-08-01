#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,in;
    cin>>n;
    vector<int>a;
    vector<int>b;
    vector<int>c;
    for(i=1;i<=n;i++)
    {
        cin>>in;
        a.push_back(in);
    }
    for(i=1;i<=n-1;i++)
    {
        cin>>in;
        b.push_back(in);
    }
    for(i=1;i<=n-2;i++)
    {
        cin>>in;
        c.push_back(in);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    for(i=0;i<=b.size();i++)
    {
        if(a[i]!=b[i])
        {
            cout<<a[i]<<endl;
            break;
        }
    }
    for(i=0;i<=c.size();i++)
    {
        if(b[i]!=c[i])
        {
            cout<<b[i]<<endl;
            break;
        }
    }
}

