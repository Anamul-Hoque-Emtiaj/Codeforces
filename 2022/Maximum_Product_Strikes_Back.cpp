#include<bits/stdc++.h>
#define ll long long int
#define db double
using namespace std;

int main()
{
    ll t=1,i,j,k;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],nz=0,nn=0;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
                nz++;
            else if(arr[i]<0)
                nn++;
        }
        ll l=0,h=n-1;
        while(arr[l]==0 && l<h)
        {
            l++;
            nz--;
        }
        while(arr[h]==0 && l<h)
        {
            h--;
            nz--;
        }
        ll lmul=1, rmul=1;
        while(nz>0 && l<h)
        {
            if(arr[l+1]==0)
            {
                lmul = 1;
                nz--;
                if(arr[l]<0)
                    nn--;
                if(l+2<=h)
                {
                    l+=2;
                }
                else
                {
                    l = h;
                }

            }
            else if(arr[h-1]==0)
            {
                rmul = 1;
                nz--;
                if(arr[h]<0)
                    nn--;
                if(h-2>=l)
                {
                    h-=2;
                }
                else
                {
                    h = l;
                }
            }
            else
            {
                if(abs(lmul*arr[l])<abs(arr[h]*rmul))
                {
                    if(arr[l]<0)
                        nn--;
                    lmul*=arr[l];
                    l++;
                }
                else
                {
                    if(arr[h]<0)
                        nn--;
                    rmul*=arr[h];
                    h--;
                }
            }
        }
        if(nn%2==1)
        {
            lmul=1, rmul=1;
            if(l==h-1)
            {
                if(arr[l]<0)
                    l++;
                else
                    h--;
            }
            while(l<h)
            {
                if(abs(lmul*arr[l])<abs(arr[h]*rmul))
                {
                    lmul*=arr[l];
                    l++;
                    if(arr[l-1]<0)
                        break;
                }
                else
                {
                    rmul*=arr[h];
                    h--;
                    if(arr[h+1]<0)
                        break;
                }
            }
        }
        if(l==h)
        {
            if(arr[l]<=0)
                cout<<n<<" 0\n";
            else
                cout<<l<<" "<<n-h-1<<endl;
        }
        else
            cout<<l<<" "<<n-h-1<<endl;
    }
}



