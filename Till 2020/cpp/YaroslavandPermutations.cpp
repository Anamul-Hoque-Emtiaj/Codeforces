#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,c=0;
    cin>>n;
    long long int a[n],arr[1001]={0},*mx;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        arr[a[i]]++;
    }
    mx=max_element(arr,arr+1001);
    if(*mx>((n+1)/2)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
