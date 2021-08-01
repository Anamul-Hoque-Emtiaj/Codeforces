#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i,j,c=0,c1=0,k,t;
    cin>>n>>a;
    int x[a],z[n];
    for(i=0; i<a; i++) cin>>x[i];
    cin>>b;
    int y[b];
    for(j=0; j<b; j++) cin>>y[j];
    for(k=0;k<n;k++) z[k]=k+1;
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(x[i]>x[j])
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(y[i]>y[j])
            {
                t=y[i];
                y[i]=y[j];
                y[j]=t;
            }
        }
    }
    for(i=0,j=0,k=0;k<n&&(i<a||j<b);k++)
    {
        if(x[i]==y[j]) c1++;
        if(z[k]==x[i])
        {
            c++;
            i++;
        }
        if(z[k]==y[j])
        {
            c++;
            j++;
        }
    }
    if(c-c1==n)cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}
