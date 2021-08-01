#include<iostream>
using namespace std;
int main()
{
    int n,i,c1=0,c2=0,mx,mn;
    cin>>n;
    int x[n];
    for(i=0;i<n;i++) cin>>x[i];
    mx=x[0];
    mn=x[0];
    for(i=0;i<n;i++)
    {
        if(x[i]>mx)
        {
            mx=x[i];
            c1++;
        }
        if(x[i]<mn)
        {
            mn=x[i];
            c2++;
        }
    }
    cout<<c1+c2;
}
