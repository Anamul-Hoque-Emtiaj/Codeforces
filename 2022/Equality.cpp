#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    int arr[k];
    memset(arr, 0, sizeof(arr));
    for(int i=0; i<n; i++)
    {
        arr[str[i]-'A']++;
    }
    int mini = 100005;
    for(int i=0; i<k; i++)
    {
        mini = min(mini,arr[i]);
    }
    cout<<mini*k<<"\n";
}




