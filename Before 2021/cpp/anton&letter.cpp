#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

char x[1000];

int compare(const void *a,const void *b)
{
    return *(char*)a-*(char*)b;
}
int main()
{
   int c=0;
   gets(x);
   int l=strlen(x);
   qsort(x,l,sizeof(char),compare) ;
   for(int i=0;i<l;i++)
   {
       if(x[i]!=x[i+1])
       {
           if(x[i]>='a'&&x[i]<='z') c++;
       }
   }
   cout<<c;
}

