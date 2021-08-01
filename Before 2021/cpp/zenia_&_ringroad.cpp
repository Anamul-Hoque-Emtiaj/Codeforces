#include<iostream>
using namespace std;
int main()
{
    long long int n,m,i,s;
    cin>>n>>m;
   long long int a[m];
    for(i=0;i<m;i++) cin>>a[i];
    s=a[0]-1;
    for(i=1;i<m;i++)
    {
        if(a[i]>a[i-1]) s=s+(a[i]-a[i-1]);
        else if(a[i]==a[i-1]) s=s;
        else s=s+((n-a[i-1])+a[i]);
    }
    cout<<s<<endl;

}
