#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

char x[200],y[100],z[200];

int compare(const void *a,const void *b)
{
    return *(char*)a-*(char*)b;
}
int main()
{
   gets(x);
   gets(y);
   gets(z);
   strcat(x,y);
   int l1,l2,i,c=0;
   l1=strlen(x);
   l2=strlen(z);
   qsort(x,l1,sizeof(char),compare);
   qsort(z,l2,sizeof(char),compare);
   if(l1==l2)
   {
       for(i=0;i<l1;i++)
       {
           if(x[i]==z[i]) c++;
       }
       if(c==l1) cout<<"YES";
       else cout<<"NO";
   }
   else cout<<"NO";

}
