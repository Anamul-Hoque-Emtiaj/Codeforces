#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,x;
        cin>>l>>x;
        long long int r=0;
        for(int i=l; i<=x; i++)
        {
            if(i<10)
                r+=(long long int)i;
            else if(i<100)
            {
                if(i%10==i/10%10)
                    r+=(long long int)i;
            }
            else if(i<1000)
            {
                if(i%10==i/100%10)
                    r+=(long long int)i;
            }
            else if(i<10000)
            {
                if(i%10==i/1000%10 && i/10%10==i/100%10)
                    r+=(long long int)i;
            }
            else if(i<100000)
            {
                if(i%10==i/10000%10 && i/10%10==i/1000%10)
                    r+=(long long int)i;
            }
        }
        cout<<r<<"\n";
    }
}







