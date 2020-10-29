#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	vector< vector<int> > v(n,vector<int> (n,0));
	vector< vector<int> > ans(n,vector<int> (n,0));
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>v[i][j];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ans[n-1-j][i]=v[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cout<<ans[i][j]<<" ";
		cout<<'\n';
	}
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

