#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c=0;
    cin>>n>>m;
    if(n>=m) cout<<n-m<<endl;
    else
    {
        while(m>n)
        {
            if(m%2==0)
            {
                m=m/2;
                c++;
            }
            else
            {
                m=(m+1)/2;
                c+=2;
            }
        }
        cout<<n-m+c<<endl;
    }
}
