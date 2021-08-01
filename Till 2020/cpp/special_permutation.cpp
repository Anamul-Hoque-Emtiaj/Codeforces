#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m,i;
       cin>>n;
       m=n;
       if(n<4) cout<<"-1"<<endl;
       else if(n==4) cout<<"3 1 4 2"<<endl;
       else
       {
           if(n%2==0)
           {
               while(n>=2)
               {
                   cout<<n<<" ";
                   n=n-2;
               }
               cout<<"5 1 3 ";
               for(i=7;i<m;i+=2) cout<<i<<" ";
           }
           else
           {
               for(i=n;i>=1;i-=2) cout<<i<<" ";
               cout<<"4 2 ";
               for(i=6;i<m;i+=2) cout<<i<<" ";
           }
       }
       cout<<endl;
    }
}

