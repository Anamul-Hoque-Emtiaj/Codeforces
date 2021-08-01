#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,j,t;
    long long int r[4];
    for(i=0;i<4;i++) cin>>r[i];
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(r[i]>r[j])
            {
                t=r[i];
                r[i]=r[j];
                r[j]=t;
            }
        }
    }
    for(i=0;i<3;i++) cout<<r[3]-r[i]<<" ";
}
