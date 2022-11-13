#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    if(arr[n-1]<arr[n-2]+arr[n-3])
    {
        cout<<"YES\n";
        for(int i=0; i<n-2; i++)
            cout<<arr[i]<<" ";
        cout<<arr[n-1]<<" "<<arr[n-2]<<endl;
    }
    else
        cout<<"NO\n";
}




