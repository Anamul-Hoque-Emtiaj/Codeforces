#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,v;
        cin>>n;
        vector<int>even,odd;
        for(i=1; i<=2*n; i++)
        {
            cin>>v;
            if(v%2==0)
                even.push_back(i);
            else
                odd.push_back(i);
        }
        int k = n-1;
        while(even.size()>1 && k>0)
        {
            cout<<even.back()<<" ";
            even.pop_back();
            cout<<even.back()<<"\n";
            even.pop_back();
            k--;
        }
        while(odd.size()>1 && k>0)
        {
            cout<<odd.back()<<" ";
            odd.pop_back();
            cout<<odd.back()<<"\n";
            odd.pop_back();
            k--;
        }
    }
}


