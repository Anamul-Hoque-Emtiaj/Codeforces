#include<bits/stdc++.h>
using namespace std;

int a[10][10];

void fl()
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            a[i][j]=-1;
        }

    }
}

int mx(int r,int c)
{
    if(r==1) return 1;
    if(c==1) return 1;
    if(a[r][c]!=-1) return a[r][c];
    a[r][c]=mx(r-1,c)+mx(r,c-1);
    return a[r][c];
}

int main()
{
    int n,s;
    cin>>n;
    s=mx(n,n);
    cout<<s<<endl;
}

