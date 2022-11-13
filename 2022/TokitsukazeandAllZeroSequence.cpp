#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[101];
        memset(arr,0,sizeof(arr));
        for(int i=0; i<n; i++)
        {
            int v;
            cin>>v;
            arr[v]++;
        }
        if(arr[0]>0)
            cout<<n-arr[0]<<"\n";
        else
        {
            int maxi=0;
            for(int i=0; i<101; i++)
            {
                maxi = max(maxi,arr[i]);
            }
            if(maxi==1)
                cout<<n+1<<"\n";
            else
                cout<<n<<"\n";
        }
    }
}



