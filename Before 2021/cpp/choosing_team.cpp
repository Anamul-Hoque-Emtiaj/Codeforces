#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,c=0;
    cin>>n>>k;
    int x[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]<=(5-k)) c++;
    }
    cout<<c/3<<endl;
}
