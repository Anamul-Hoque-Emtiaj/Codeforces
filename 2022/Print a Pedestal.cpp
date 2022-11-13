#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m = n/3;
        if(n%3==0)
            cout<<m<<" "<<m+1<<" "<<m-1<<endl;
        else if(n%3==1)
            cout<<m<<" "<<m+2<<" "<<m-1<<endl;
        else
            cout<<m+1<<" "<<m+2<<" "<<m-1<<endl;
    }
}



