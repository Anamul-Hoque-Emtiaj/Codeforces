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
        ll arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        if(n%2==0)
            cout<<"YES\n";
        else
        {
            bool f = true;
            for(int i=1; i<n; i++)
            {
                if(arr[i]<=arr[i-1])
                {
                    f = false;
                    break;
                }
            }
            if(!f)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }

    }
}



