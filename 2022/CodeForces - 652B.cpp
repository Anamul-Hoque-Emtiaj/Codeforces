#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin>>n;
    list<ll> li;
    for(int i=0; i<n; i++)
    {
        ll t;
        cin>>t;
        li.push_back(t);
    }
    li.sort();
    int f =0;
    while(!li.empty())
    {
        if(f==0)
        {
            cout<<li.front()<<" ";
            li.pop_front();
            f = 1;
        }
        else
        {
            cout<<li.back()<<" ";
            li.pop_back();
            f = 0;
        }
    }
    cout<<endl;
}




