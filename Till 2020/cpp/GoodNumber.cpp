#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,c=0;
    cin>>n>>k;
    while(n--)
    {
        long long int a,x=0,r,c1=0;
        cin>>a;
        while(a!=0)
        {
            r=a%10;
            if(r<=k)
            {
                c1++;
            }
            a=a/10;
        }
        if(c1==k+1) c++;
    }
    cout<<c<<endl;
}
