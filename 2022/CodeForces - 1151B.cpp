#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,m,r;
    cin>>n>>m;
    int arr[n][m],cn,rn;
    bool f = false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];

            if(arr[i][0]!=arr[i][j])
            {
                f = true;
                rn = i;
                cn = j;
            }
        }
        if(i==0)
            r = arr[0][0];
        else
            r = r^arr[i][0];

    }

    if(r==0)
    {
        if(f)
        {
            cout<<"TAK\n";
            for(int j=0; j<n; j++)
            {
                if(rn==j)
                {
                    cout<<cn+1<<" ";
                }
                else
                    cout<<"1 ";
            }
            cout<<endl;
        }
        else
            cout<<"NIE\n";
    }
    else
    {
        cout<<"TAK\n";
        for(int j=0; j<n; j++)
        {
            cout<<"1 ";
        }
        cout<<endl;
    }
}



