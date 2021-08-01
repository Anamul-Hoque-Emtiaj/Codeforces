#include<bits/stdc++.h>
using namespace std;

int main()
{
   char s[200005],s1[100005];
   int i,j=0;
   cin>>s;
   for(i=strlen(s)-1;i>=0;i--)
   {
       s1[j]=s[i];
       j++;
   }
   strcat(s,s1);
   cout<<s<<endl;
}
