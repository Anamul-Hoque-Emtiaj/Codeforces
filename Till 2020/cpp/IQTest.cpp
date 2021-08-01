#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	string str[10];
	for(int i=0;i<4;i++) cin>>str[i];
	int r=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			int num=0;
			if(str[i][j]=='.') num++;
			if(str[i+1][j+1]=='.') num++;
			if(str[i][j+1]=='.') num++;
			if(str[i+1][j]=='.') num++;
			if(num!=2)
			{
				cout<<"YES"<<endl;
				r=1;
				break;
			}
			else continue;
		}
		if(r==1) break;
	}
	if(r==0) cout<<"NO"<<endl;
	return 0;
}
