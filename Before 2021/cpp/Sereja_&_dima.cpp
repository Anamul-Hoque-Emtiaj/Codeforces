#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,in,s=0,d=0;
    cin>>n;
    list<int>a;
    for(i=1;i<=n;i++)
    {
        cin>>in;
        a.push_back(in);
    }
    for(i=1;!a.empty();i++)
    {
        if(i%2==0)
        {
            if(a.front()>a.back())
            {
                d=d+a.front();
                a.pop_front();
            }
            else
            {
                d=d+a.back();
                a.pop_back();
            }
        }
        else
        {
            if(a.front()>a.back())
            {
                s=s+a.front();
                a.pop_front();
            }
            else
            {
                s=s+a.back();
                a.pop_back();
            }
        }
    }
    cout<<s<<" "<<d<<endl;
}
