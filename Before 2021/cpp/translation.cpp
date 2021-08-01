#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char c[100],d[100];
    gets(c);
    gets(d);
    int l=strcmp(d,strrev(c));
    if(l==0) cout<<"YES";
    else cout<<"NO";
}
