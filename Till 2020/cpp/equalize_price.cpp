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
        int a[n],i,s=0,av;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        if(s%n==0) cout<<s/n<<endl;
        else cout<<(s/n)+1<<endl;
    }
}
