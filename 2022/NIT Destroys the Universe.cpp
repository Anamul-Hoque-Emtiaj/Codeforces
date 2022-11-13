#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll x,prev,c=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(i==0)
            {
                prev = x;
            }
            else
            {
                if(prev!=0 && x==0)
                {
                    c++;
                }
                prev = x;
            }
        }
        if(prev!=0)
            c++;
        cout<<c<<endl;
    }
}



