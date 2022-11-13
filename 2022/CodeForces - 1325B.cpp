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
        sort(arr,arr+n);
        ll li = arr[0],c=1;
        for(int i=1; i<n; i++)
        {
            if(arr[i]!=li)
            {
                li = arr[i];
                c++;
            }
        }
        cout<<c<<"\n";
    }
}



