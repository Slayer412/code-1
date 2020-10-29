#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
const int mxn=1e5+1;
vi graph[mxn],dis(mxn);
vi times(mxn);
vector<bool> f(2,false);
void dfs(int u, int p){
	dis[u] = dis[p] + 1;
	cout<<"distance of "<<u<<" is "<<dis[u]<<'\n';
	for(int v : graph[u]){
		if(v != p){
			dfs(v, u);
		}
	}
}
void solve()
{
	int n;cin>>n;
	int u,v;
	for(int i=0;i<n-1;i++)
	{
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	dis[1]=-1;
	dfs(1,1);
	for(int i=1;i<=n;i++)
	{
		if(graph[i].size()==1)
		{
			times[graph[i][0]]++;
			f[dis[i]&1]=1;
		}
	}
	int ans=1;
	for(int i=1;i<=n;i++)
	{
		ans+=times[i]>1?times[i]-1:0;
	}
	int ans1=f[0]&&f[1]?3:1;
	cout<<ans1<<" "<<n-ans<<'\n';
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

