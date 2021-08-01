#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,i,c=0;
        cin>>n>>k;
        char a[n];
        for(i=0;i<n;i++)
        {
             cin>>a[i];
             if((i+1)%k==0)
             {
                 if(a[i]=='0') c++;
             }
             else
             {
                 if(a[i]!='0') c++;
             }
        }
        cout<<c<<endl;
    }
}

