#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a1,a2;
        cin>>n>>a1>>a2;
        long long int maxi = (long long int)a1*a2;
        for(int i=3; i<=n; i++)
        {
            int a;
            cin>>a;
            maxi = max(maxi,(long long int)a2*a);
            a1 = a2;
            a2 = a;
        }
        cout<<maxi<<"\n";
    }
}
