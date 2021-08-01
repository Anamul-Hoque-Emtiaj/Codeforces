#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n>=0) cout<<n<<endl;
    else if(n==-10||n==-20||n==-30||n==-40||n==-50||n==-60||
            n==-70||n==-80||n==-90) cout<<"0"<<endl;
    else
    {
        long long int i,t,l;
        char a[10];
        itoa(n,a,10);
        l=strlen(a);
        if(a[l-1]<a[l-2])
        {
            t=a[l-1];
            a[l-1]=a[l-2];
            a[l-2]=t;
        }
        for(i=0;i<l-1;i++) printf("%c",a[i]);
        cout<<endl;
    }
}
