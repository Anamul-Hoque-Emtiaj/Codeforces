#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    int mx1,mx2;
    for(i=0; i<n; i++)
    {
        if(arr[n-1]!=arr[i])
        {
            mx1 = n - i - 1;
            break;
        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(arr[0]!=arr[i])
        {
            mx2 = i;
            break;
        }
    }
    cout<<max(mx1,mx2)<<"\n";
}






