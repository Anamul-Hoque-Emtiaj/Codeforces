#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,c=0;
        cin>>n;
        for(i=0;n>0&&n>=(3*i+2);i++)
        {
            n=n-2-3*i;
            c++;
        }
        cout<<c;
    }
}

