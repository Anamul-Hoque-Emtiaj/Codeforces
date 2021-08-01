#include<iostream>
using namespace std;
int main()
{
    int n,i,e=0,o=0,e1,o1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            e++;
            e1=i;
        }
        else
        {
            o++;
            o1=i;
        }
    }
    if(e==1) cout<<e1+1;
    else if(o==1) cout<<o1+1;
}
