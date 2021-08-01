#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,c=0,c1,r;
    cin>>n;
    if(n<=5)
    {
        if(n==1) cout<<"Sheldon"<<endl;
        else if(n==2) cout<<"Leonard"<<endl;
        else if(n==3) cout<<"Penny"<<endl;
        else if(n==4) cout<<"Rajesh"<<endl;
        else if(n==5) cout<<"Howard"<<endl;
    }
    else
    {
        for(i=0;n>=5*pow(2,i);i++)
        {
            n=n-5*pow(2,i);
            c++;
        }
        if(n==0)
             cout<<"Howard"<<endl;
        else
        {
            r=ceil((double)n/(pow(2,c)));
            if(r==1) cout<<"Sheldon"<<endl;
            else if(r==2) cout<<"Leonard"<<endl;
            else if(r==3) cout<<"Penny"<<endl;
            else if(r==4) cout<<"Rajesh"<<endl;
            else if(r==5) cout<<"Howard"<<endl;
        }
    }
}

