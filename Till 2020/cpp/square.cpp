#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((max(a,b)==max(c,d))&&(min(a,b)+min(c,d)==max(a,b)))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}


