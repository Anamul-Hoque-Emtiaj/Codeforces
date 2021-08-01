#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n%2==0)
    {
        if((n/2)%2!=0) cout<<(n/2)-1<<" "<<(n/2)+1;
        else cout<<n/2<<" "<<n/2;
    }
    else cout<<"9 "<<n-9;
}
