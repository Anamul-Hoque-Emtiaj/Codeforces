#include<bits/stdc++.h>
using namespace std;

int  main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long int n,i,in,c=0,a;
        cin>>n;
        list<int>l;
        for(i=1;i<=n;i++)
        {
            cin>>in;
            l.push_back(in);
        }
        l.sort();
        while(!l.empty())
        {
            a=l.back()-1;
            l.pop_back();
            c++;
            if(a>0)
            {
                while(a--)
                {
                    l.pop_front();
                }
            }
        }
        cout<<c<<endl;
    }
}
