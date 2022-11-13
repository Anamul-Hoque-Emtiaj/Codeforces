#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    if((a<0 && b>0) || a==0 || b==0)
        cout<<"Zero\n";
    else if(a<0 && b<0)
    {
        if((b-a+1)%2==0)
            cout<<"Positive\n";
        else
            cout<<"Negative\n";
    }
    else
        cout<<"Positive\n";
}


