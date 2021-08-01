#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,x,c=0;
    cin>>n>>x;
    while(n--)
    {
        char ch;
        long long int p;
        cin>>ch>>p;
        if(ch=='+') x=x+p;
        else
        {
            if(p>x) c++;
            else x=x-p;
        }
    }
    cout<<x<<' '<<c<<endl;
}
