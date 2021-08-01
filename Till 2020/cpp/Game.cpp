#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0;
    cin>>n;
    int a[n][2];
    for(i=0;i<n;i++) cin>>a[i][0]>>a[i][1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][0]==a[j][1]) c++;
        }
    }
    cout<<c;
}
