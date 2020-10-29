#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxn=200005;
int size[mxn],dis[mxn];
vector< int> edg[mxn];
void dfs(int v,int par)
{
	dis[v]=dis[par]+1;
	size[v]=1;
	for(auto child:edg[v])
	{
		if(child!=par)
		{
			dfs(child,v);
			size[v]+=size[child];	
		}
	}
}
void solve()
{
	int n,k;
	cin>>n>>k;
	int u,v;
	for(int i=2;i<=n;i++)
	{
		cin>>u>>v;
		edg[u].push_back(v);
		edg[v].push_back(u);
	}
	dfs(1,0);
	vector<int>ans;
	for(int i=1;i<=n;i++)
	ans.push_back(size[i]-dis[i]);
	sort(ans.rbegin(),ans.rend());
	ll res=0;
	for(int i=0;i<n-k;i++)
	res+=ans[i];
	cout<<res<<'\n';
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

