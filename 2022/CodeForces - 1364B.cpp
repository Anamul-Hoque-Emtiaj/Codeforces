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
        vector<int>v;
        v.push_back(arr[0]);
        for(int i=1; i<n-1; i++)
        {
            if((arr[i]>arr[i-1]&& arr[i]>arr[i+1]) || (arr[i]<arr[i-1]&& arr[i]<arr[i+1]))
                v.push_back(arr[i]);
        }
        v.push_back(arr[n-1]);
        cout<<v.size()<<"\n";
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}



