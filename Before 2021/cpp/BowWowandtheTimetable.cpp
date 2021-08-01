#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	cin>>n;
	int m=n.size();
	for(int i=n.size()-1; i>0; i--){
		if(n[i]=='1'){
			m++;
			break;
		}
	}
	cout<<m/2;
}
