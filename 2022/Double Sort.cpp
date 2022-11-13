#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int arr1[n],arr2[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>arr2[i];
        }
        vector<pair<int, int>>v;
        for(int i=0; i<n; i++)
        {
            int t = i;
            for(int j=i+1; j<n; j++)
            {
                if(arr1[t]>arr1[j] || (arr1[t]==arr1[j] && arr2[t]>arr2[j]))
                {
                    t = j;
                }
            }
            if(t!=i)
            {
                swap(arr1[i],arr1[t]);
                swap(arr2[i],arr2[t]);
                v.push_back(make_pair(t+1,i+1));
            }
        }
        bool f = true;
        for(int i=0; i<n-1; i++)
        {
            if(arr2[i]>arr2[i+1])
            {
                f = false;
                break;
            }
        }
        if(f)
        {
            cout<<v.size()<<endl;
            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i].first<<" "<<v[i].second<<endl;
            }
        }
        else
            cout<<"-1\n";
    }
}



