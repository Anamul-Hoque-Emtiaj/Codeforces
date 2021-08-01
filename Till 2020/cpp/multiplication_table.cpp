#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,i,c=0,j;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        if((x/i)<=n&&(x%i==0))
        {
            c++;
        }
        if(c==x) break;
    }
    cout<<c<<endl;
}
