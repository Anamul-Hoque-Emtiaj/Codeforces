#include<iostream>
using namespace std;
int main()
{
    int n,m,i,p,j=0,k=1,l=3;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {

            if(i==j)
            {
                for(p=0;p<m;p++)
                {
                    cout<<"#";
                }
               j=j+2;
            }
            else if(i==k)
            {
                for(p=0;p<m;p++)
                {
                    if(p==m-1) cout<<"#";
                    else cout<<".";
                }
                k=k+4;
            }
            else if(i==l)
            {
                for(p=0;p<m;p++)
                {
                    if(p==0) cout<<"#";
                    else cout<<".";
                }
                l=l+4;
            }
        cout<<endl;
    }
}
