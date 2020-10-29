#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n,m,k;
	cin>>n>>m>>k;
	int mat[n][k];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
			cin>>mat[i][j];
	}
	for(int i=0;i<n;i++)
	{
		cout<<(rand()%(m+1))<<" ";
	}
	cout<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

