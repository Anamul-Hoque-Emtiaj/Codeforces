#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,in;
        cin>>n;
        list<int>a;
        for(i=0;i<n;i++)
        {
            cin>>in;
            a.push_back(in);
        }
        a.sort();
        a.unique();
        cout<<a.size()<<endl;
    }
}
