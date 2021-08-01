#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,in,c=0,a,c1=0,b,c2=0;
    cin>>n;
    list<int>l1;
    for(i=1;i<=n;i++)
    {
        cin>>in;
        l1.push_back(in);
    }
    cin>>m;
    list<int>l2;
    for(i=1;i<=m;i++)
    {
        cin>>in;
        l2.push_back(in);
    }
    l1.sort();
    l2.sort();
    a=l1.size();
    b=l2.size();
    while(!l1.empty()&&!l2.empty())
    {
        while(!l1.empty()&&!l2.empty())
        {
            if((abs(l1.front()-l2.front())<=1))
            {
                c++;
                l2.pop_front();
                break;
            }
            else l2.push_back(l2.front());
            l2.pop_front();
            c2++;
            if(c2==b) break;
        }
        c1++;
        if(c1==a) break;
        c2=0;
        l1.pop_front();
    }
    cout<<c<<endl;

}

