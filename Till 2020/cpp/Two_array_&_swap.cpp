#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,in,s=0;
        cin>>n>>k;
        list<int>a;
        list<int>b;
        for(i=1;i<=n;i++)
        {
            cin>>in;
            a.push_back(in);
        }
        for(i=1;i<=n;i++)
        {
            cin>>in;
            b.push_back(in);
        }
        a.sort();
        b.sort();
        for(i=1;i<=k;i++)
        {
            if(a.front()<b.back())
            {
                s=s+b.back();
                b.pop_back();
                a.pop_front();
            }
        }
        for(i=1;!a.empty();i++)
        {
            s=s+a.front();
            a.pop_front();

        }
        cout<<s<<endl;
    }
}

