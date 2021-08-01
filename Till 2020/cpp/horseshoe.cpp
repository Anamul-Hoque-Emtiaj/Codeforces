#include<iostream>
#include<stdlib.h>
using namespace std;

int x[4];

int compare(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int i,c=0;
    for(i=0;i<4;i++) cin>>x[i];
   qsort(x,4,sizeof(int),compare);
   for(i=0;i<4;i++)
   {
       if(x[i]!=x[i+1]) c++;
   }
   cout<<4-c;
}

