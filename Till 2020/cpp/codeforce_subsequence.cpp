#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    long long unsigned int n,k,i;
    cin>>n;
    string s10,s9,s8,s7,s6,s5,s4,s3,s2,s1;
    k=log10(n);
    if(k>4)
    {
        s10.assign(100,'s');
        k=k-2;
        n=n/100;
    }
    else
    {
        if(n>100)
        {
            s10.assign(10,'s');
            k=k-1;
            n=n/10;
        }
        else if(n!=1)
        {
            s10.assign(n,'s');
            n=1;
        }
        else if(n==1) s10="s";
    }
    if(k>4)
    {
        s9.assign(100,'e');
        k=k-2;
        n=n/100;
    }
    else
    {
        if(n>100)
        {
            s9.assign(10,'e');
            k=k-1;
            n=n/10;
        }
        else if(n!=1)
        {
            s9.assign(n,'e');
            n=1;
        }
        else if(n==1) s9="e";
    }
    if(k>4)
    {
        s8.assign(100,'c');
        k=k-2;
        n=n/100;
    }
    else
    {
        if(n>100)
        {
            s8.assign(10,'c');
            k=k-1;
            n=n/10;
        }
        else if(n!=1)
        {
            s8.assign(n,'c');
            n=1;
        }
        else if(n==1) s8="c";
    }
    if(k>4)
    {
        s7.assign(100,'r');
        k=k-2;
        n=n/100;
    }
    else
    {
        if(n>100)
        {
            s7.assign(10,'r');
            k=k-1;
            n=n/10;
        }
        else if(n!=1)
        {
            s7.assign(n,'r');
            n=1;
        }
        else if(n==1) s7="r";
    }
    if(k>4)
    {
        s6.assign(100,'o');
        k=k-2;
        n=n/100;
    }
    else
    {
        if(n>100)
        {
            s6.assign(10,'o');
            k=k-1;
            n=n/10;
        }
        else if(n!=1)
        {
            s6.assign(n,'o');
            n=1;
        }
        else if(n==1) s6="o";
    }
    if(k>4)
    {
        s5.assign(100,'f');
        k=k-2;
        n=n/100;
    }
    else
    {
        if(n>100)
        {
            s5.assign(10,'f');
            k=k-1;
            n=n/10;
        }
        else if(n!=1)
        {
            s5.assign(n,'f');
            n=1;
        }
        else if(n==1) s5="f";
    }
    if(k>4)
    {
        s4.assign(100,'e');
        k=k-2;
        n=n/100;
    }
    else
    {
        if(n>100)
        {
            s4.assign(10,'e');
            k=k-1;
            n=n/10;
        }
        else if(n!=1)
        {
            s4.assign(n,'e');
            n=1;
        }
        else if(n==1) s4="e";
    }
    if(k>4)
    {
        s3.assign(100,'d');
        k=k-2;
        n=n/100;
    }
    else
    {
        if(n>100)
        {
            s3.assign(10,'d');
            k=k-1;
            n=n/10;
        }
        else if(n!=1)
        {
            s3.assign(n,'d');
            n=1;
        }
        else if(n==1) s3="d";
    }
    if(k>4)
    {
        s2.assign(100,'o');
        k=k-2;
        n=n/100;
    }
    else
    {
        if(n>100)
        {
            s2.assign(10,'o');
            k=k-1;
            n=n/10;
        }
        else if(n!=1)
        {
            s2.assign(n,'o');
            n=1;
        }
        else if(n==1) s2="o";
    }
    if(k>4)
    {
        s1.assign(100,'c');
        k=k-2;
        n=n/100;
    }
    else
    {
        if(n>100)
        {
            s1.assign(10,'c');
            k=k-1;
            n=n/10;
        }
        else if(n!=1)
        {
            s1.assign(n,'c');
            n=1;
        }
        else if(n==1) s1="c";
    }
    cout<<s1+s2+s3+s4+s5+s6+s7+s8+s9+s10<<endl;
}
