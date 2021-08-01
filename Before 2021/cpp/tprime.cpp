#include<iostream>
#include<math.h>
using namespace std;
void prime(long long int n)
{
    int r,i,c=0;
    if(n%2==0)
    {
        if(n==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        r=sqrt(n);
        for(i=3;i<=ceil(r)+1;i=i+2)
        {
            if(n%i==0&&n!=i) c++;
            if(c>=2) break;
        }
        if(c==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a;
        cin>>a;
        prime(a);

    }
}
