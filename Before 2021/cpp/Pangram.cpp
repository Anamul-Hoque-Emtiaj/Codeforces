#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
char x[100];

int compare(const void *a,const void *b)
{
    return *(char*)a-*(char*)b;
}
int main()
{
    int n;
    cin>>n;
    int c=0,i;
   scanf("%s",x);
   for(i=0;i<n;i++)
   {
       if(x[i]>='A'&&x[i]<='Z') x[i]='a'+x[i]-'A';
   }
   qsort(x,n,sizeof(char),compare);
   for(i=0;i<n;i++)
   {
       if(x[i]!=x[i+1]) c++;
   }
   if(c==26) cout<<"YES";
   else cout<<"NO";

}

