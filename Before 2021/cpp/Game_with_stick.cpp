#include<iostream>
using namespace std;
int main()
{
    int n,m,i,c=0,p;
    cin>>n>>m;
    p=n*m;
    for(i=1;p!=0;i++)
    {
        p=p-n-m+1;
        n--;
        m--;
        c++;
    }
    if(c%2==0) cout<<"Malvika";
    else cout<<"Akshat";
}
