#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,i;
    cin>>n;
    s=n;
    for(i=1;i<=n-2;i++)
    {
        s=s+(n-(i+1))*(i+1)+1;
    }
    if(n==1) cout<<n<<endl;
    else cout<<s+1<<endl;
}
