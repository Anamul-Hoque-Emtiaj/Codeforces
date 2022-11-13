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
        cin>>n>>m;
        string s[n];
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        int mini = 1000000;
        for(int i=0; i<n-1; i++)
        {
            for(int k=i+1; k<n; k++)
            {
                int c=0;
                for(int j=0; j<m; j++)
                    c+=(abs(s[k][j]-s[i][j]));
                mini = min(c,mini);
            }
        }
        cout<<mini<<"\n";
    }
}


