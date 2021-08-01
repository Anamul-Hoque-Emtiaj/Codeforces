#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c1=0,c2=0,c3=0,m,n1,j,x=0,y=0,z=1,in,cx=-1,cy=-1,cz=-1,c;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1) c1++;
        else if(a[i]==2) c2++;
        else if(a[i]==3) c3++;
    }
    n1=min(c1,c2);
    m=min(n,c3);
    cout<<m<<endl;
    for(i=0; c!=m; i++)
    {
        if(a[i]==1&&x==0&&y==0&&z==1&&cx!=i)
        {
            cout<<i+1<<" ";
            x++;
            z=0;
            cx=i;
        }
        else if(a[i]==2&&x==1&&y==0&&z==0&&cy!=i)
        {
            cout<<i+1<<" ";
            y++;
            cy=i;
        }
        else if(a[i]==3&&y==1&&z==0&&x==1&&cz!=i)
        {
            cout<<i+1<<endl;
            z++;
            x==0;
            y=0;
            cz=i;
            c++;
        }
        if(i==(n-1)) i=0;
    }
}
