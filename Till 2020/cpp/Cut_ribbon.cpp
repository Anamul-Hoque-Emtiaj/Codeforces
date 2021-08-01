#include<iostream>
using namespace std;

int main()
{
    int n,i,c=0,j,t,m;
    cin>>n;
    m=n;
    int a[3];
    for(i=0;i<3;i++) cin>>a[i];
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        n=n-a[i];
        if(n<0){ break;}
        if(i==2) i=0;
        c++;
    }
    cout<<c;
}
