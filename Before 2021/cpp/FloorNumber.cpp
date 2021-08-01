#include<bits/stdc++.h>
#include<math.h>
using namespace std;

#define ll long long int
///#define io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n,x,c=1;
        cin>>n>>x;
        n=n-2;
        while(n>=x)
        {
            c++;
            n-=x;
        }
        if(n<=0) cout<<c<<endl;
        else cout<<c+1<<endl;

    }
}
