#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int arr[n],sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];

        }
        if(sum==0)
            cout<<"NO\n";
        else if(sum>0)
        {
            sort(arr,arr+n);
            cout<<"YES\n";
            for(int i=n-1; i>=0; i--)
                cout<<arr[i]<<" ";
            cout<<"\n";
        }
        else
        {
            sort(arr,arr+n);
            cout<<"YES\n";
            for(int i=0; i<n; i++)
                cout<<arr[i]<<" ";
            cout<<"\n";
        }
    }
}



