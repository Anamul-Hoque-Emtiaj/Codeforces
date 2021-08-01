#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,r=1,i;
        cin>>n;
        for(i=1;;i++)
        {
            r=r+pow(2,i);
            if(n%r==0)
            {
                cout<<n/r<<endl;
                break;
            }
        }
    }
}
