#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,s=0;
        cin>>n;
        for(i=1;i<=n/2;i++)
        {
            s=s+pow(2,i);
        }
        cout<<s<<endl;

    }
}
