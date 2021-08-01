#include<iostream>
using namespace std;

int main()
{
    int s,n,i,c=0,j,t,p;
    cin>>s>>n;
    int a[n][2];
    for(i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i][0]>a[j][0])
            {
                t=a[i][0];
                a[i][0]=a[j][0];
                a[j][0]=t;
                p=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=p;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s>a[i][0])
        {
            s=s+a[i][1];
            c++;
        }
        else break;
    }
    if(c==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
