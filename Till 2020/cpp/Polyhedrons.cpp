#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

struct pld
{
    char s[15];
};

int main()
{
    int n,i,a1=0,b1=0,c1=0,d1=0,e1=0,s=0;
    cin>>n;
    struct pld x[n];
    for(i=0;i<=n;i++)
    {
        gets(x[i].s);
    }
    char a[]="Tetrahedron";
    char b[]="Cube";
    char c[]="Octahedron";
    char d[]="Dodecahedron";
    char e[]="Icosahedron";
    for(i=0;i<=n;i++)
    {
        if(strcmp(x[i].s,a)==0) s=s+4;
        else if(strcmp(x[i].s,b)==0) s=s+6;
        else if(strcmp(x[i].s,c)==0) s=s+8;
        else if(strcmp(x[i].s,d)==0) s=s+12;
        else if(strcmp(x[i].s,e)==0) s=s+20;
    }
    cout<<s;
}
