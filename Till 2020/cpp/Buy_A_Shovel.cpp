#include<iostream>
using namespace std;
int main()
{
    int k,r,i,c=0,p=0,q;
    cin>>k>>r;
    for(i=1;;i++)
    {
        p=p+k;
        q=p%10;
        c++;
        if(q==r||q==0) break;
    }
    cout<<c;

}
