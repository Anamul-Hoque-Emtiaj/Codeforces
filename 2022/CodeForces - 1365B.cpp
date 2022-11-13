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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int c0=0,c1=0,s;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            if(s==0)
                c0++;
            else
                c1++;
        }
        if(c1>0 && c0>0)
        {
            cout<<"Yes\n";
        }
        else
        {
            bool f = true;
            for(int i=1; i<n; i++)
            {
                if(arr[i]<arr[i-1])
                {
                    f = false;
                    break;
                }
            }
            if(f)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
}



