#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int x;
    cin>>n>>x;
    long long int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    long long int ans=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]+arr[i-1]>x)
        {
            int ex = arr[i]+arr[i-1] - x;
            ans+=ex;
            if(ex>arr[i])
            {
                arr[i] = 0;
                arr[i-1] = ex - arr[i];
            }
            else
                arr[i]-=ex;
        }
    }
    cout<<ans<<"\n";
}





