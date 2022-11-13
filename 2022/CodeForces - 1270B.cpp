#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        ll arr[n];
        bool f=false;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i>0 && abs(arr[i]-arr[i-1])>1)
            {
                f=true;
                x = i;
            }
        }
        if(f)
        {
            cout<<"YES\n";
            cout<<x<<" "<<x+1<<endl;
        }
        else
            cout<<"NO\n";
    }
}
