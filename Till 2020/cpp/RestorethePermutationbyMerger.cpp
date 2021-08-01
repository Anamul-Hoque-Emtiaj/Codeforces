#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi acos(-1)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,m,c;
        cin>>n;
        ll b[51]={0},in;
        list<int>li1;
        list<int>:: iterator it;
        for(i=0;i<2*n;i++)
        {
            cin>>in;
            li1.push_back(in);
            b[in]++;
        }
        while(!li1.empty())
        {
             c=li1.front();
             li1.pop_front();
             if(b[c]>0)
             {
                 cout<<c<<" ";
                 b[c]=b[c]-2;
             }
        }
        cout<<endl;
    }
}

