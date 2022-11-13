#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int oc=0,ec=0,ok=0,ek=0;
    for(int i=0; i<n; i++)
    {
        long long int a;
        cin>>a;
        if(a%2==0)
            ec++;
        else
            oc++;
    }
    for(int i=0; i<m; i++)
    {
        long long int a;
        cin>>a;
        if(a%2==0)
            ek++;
        else
            ok++;
    }
    cout<<min(ec,ok)+min(oc,ek)<<"\n";
}



