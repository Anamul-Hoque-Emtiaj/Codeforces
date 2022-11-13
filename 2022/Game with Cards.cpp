#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int maxi1 = 0,maxi2 = 0,v;
        for(int i=0; i<n; i++)
        {
            cin>>v;
            maxi1 = max(maxi1,v);
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>v;
            maxi2 = max(maxi2,v);
        }
        if(maxi1==maxi2)
        {
            cout<<"Alice\n";
            cout<<"Bob\n";
        }
        else if(maxi1>maxi2)
        {
            cout<<"Alice\n";
            cout<<"Alice\n";
        }
        else
        {
            cout<<"Bob\n";
            cout<<"Bob\n";
        }
    }
}


