#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int mat[5][5];
	int r,c;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++){
		cin>>mat[i][j];
		if(mat[i][j])r=i+1,c=j+1;
		}
	}
	cout<<abs(3-r)+abs(3-c)<<'\n';
	
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

