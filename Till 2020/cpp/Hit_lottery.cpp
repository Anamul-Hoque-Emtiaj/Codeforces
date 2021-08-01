#include<iostream>
using namespace std;
int main()
{
    long long int n;
    int a,b,c,d,e;
    cin>>n;
    a=n/100;
    b=n%100/20;
    c=n%100%20/10;
    d=n%100%20%10/5;
    e=n%100%20%10%5;
    cout<<a+b+c+d+e;
}
