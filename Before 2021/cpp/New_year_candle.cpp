#include<iostream>
using namespace std;

int main()
{
    int a,b,s,x,r;
    cin>>a>>b;
    if(a<b) cout<<a<<endl;
    else
    {
        s=a-b;
        if(s%(b-1)==0)
        {
            x=s/(b-1);
            cout<<a+x+1<<endl;
        }
        else
        {
            x=s/(b-1);
            r=s%(b-1);
            cout<<b+x+1+x*(b-1)+r<<endl;
        }
    }
}
