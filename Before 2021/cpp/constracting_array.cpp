#include<bits/stdc++.h>
using namespace std;

int x[200000],c=1;

int car(long long int a,long long int b)
{
    int i;
    if(i==b) return b;
    if((b-a+1)%2==0)
    {
         i=(b+a-1)/2;
        return x[i]=c++;
        return car(i+1,b);
        return car(a,i-1);
    }
    else
    {
        i=(b+a)/2;
        return x[i]=c++;
        return car(a,i-1);
        return car(i+1,b);
    }
}

void show(int m)
{
    long long int i;
    for(i=0;i<m;i++) cout<<x[i]<<" ";
    cout<<endl;
}

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        car(1,n);
        show(n);
    }
}
