#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t=1,i,j,k;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],s=0;
        bool f = false;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            s+=arr[i];
            if(arr[i]%x!=0)
                f = true;
        }
        if(f)
        {
            if(s%x!=0)
                cout<<n<<"\n";
            else
            {
                int p=0,n1,n2;
                for(i=0; i<n; i++)
                {
                    p+=arr[i];
                    if((s-p)%x!=0)
                    {
                        n1 = n - (i+1);
                        break;
                    }
                }
                p=0;
                for(i=n-1; i>=0; i--)
                {
                    p+=arr[i];
                    if((s-p)%x!=0)
                    {
                        n2 = i;
                        break;
                    }
                }
                cout<<max(n1,n2)<<"\n";
            }
        }
        else
            cout<<"-1\n";
    }
}
