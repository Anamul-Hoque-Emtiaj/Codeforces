#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,o=0,e=0,c1=0;
        cin>>n;
        int a[2*n],i;
        vector<int>b;
        vector<int>c;
        for(i=0; i<2*n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                e++;
                b.push_back(i+1);
            }
            else
            {
                o++;
                c.push_back(i+1);
            }
        }
        if(o==0)
        {
            b.pop_back();
            b.pop_back();
            while(!b.empty())
            {
                cout<<b.back()<<" ";
                b.pop_back();
                cout<<b.back()<<endl;
                b.pop_back();
            }
        }
        else if(e==0)
        {
            c.pop_back();
            c.pop_back();
            while(!c.empty())
            {
                cout<<c.back()<<" ";
                c.pop_back();
                cout<<c.back()<<endl;
                c.pop_back();
            }
        }
        else if(o%2==0)
        {
            c.pop_back();
            c.pop_back();
            while(!c.empty())
            {
                cout<<c.back()<<" ";
                c.pop_back();
                cout<<c.back()<<endl;
                c.pop_back();
            }
            while(!b.empty())
            {
                cout<<b.back()<<" ";
                b.pop_back();
                cout<<b.back()<<endl;
                b.pop_back();
            }
        }
        else if(o%2!=0)
        {
            b.pop_back();
            c.pop_back();
            while(!c.empty())
            {
                cout<<c.back()<<" ";
                c.pop_back();
                cout<<c.back()<<endl;
                c.pop_back();
            }
            while(!b.empty())
            {
                cout<<b.back()<<" ";
                b.pop_back();
                cout<<b.back()<<endl;
                b.pop_back();
            }
        }
    }
}
