#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char x[100];

int compare(const void *a,const void *b)
{
    return *(char*)a-*(char*)b;
}
int main()
{
    int c=0,i;
   gets(x);
   strlwr(x);
   int l=strlen(x);
   qsort(x,l,sizeof(char),compare);
   for(i=0;i<l;i++)
   {
       if(x[i]!=x[i+1]) c++;
   }
   if(c==26) printf("YES");
   else printf("NO");

}


