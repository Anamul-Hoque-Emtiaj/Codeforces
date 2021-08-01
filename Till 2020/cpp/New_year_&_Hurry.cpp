#include<iostream>
using namespace std;
int main()
{
    int n,i,k,r,c=0;
    cin>>n>>k;
    r=240-k;
    for(i=1;i<=n&&r>=5*i;i++)
    {
        r=r-5*i;
        c++;
    }
    cout<<c;
}
