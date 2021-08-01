#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,e=0,o=0,e1,o1,c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0) e++;
            else o++;
        }
        if(n%2==0)
        {
            e1=n/2;
            o1=n/2;
        }
        else
        {
            e1=(n/2)+1;
            o1=n/2;
        }
        if((e1==e)&&(o1==o))
        {
           for(i=0;i<n;i++)
           {
               if(i%2==0)
               {
                   if(a[i]%2!=0) c++;
               }
               else
               {
                   if(a[i]%2==0) c++;
               }
           }
           cout<<c/2<<endl;
        }
        else cout<<"-1"<<endl;
    }
}

