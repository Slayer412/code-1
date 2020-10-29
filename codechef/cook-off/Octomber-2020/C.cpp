#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int N=105;
vector<int> adj[N];
vector<int> val(N);
std::vector<int> vis(N);
void dfs(int src){
	vis[src]=1;
	for(auto it :adj[src]){
		if(!vis[it]){
			if(val[src]==1){
				val[it]=2;	
			}
			else
				val[it]=1;
			dfs(it);
		}
	}
}
void solve()
{	
	int n;cin>>n;
	f(i,0,n+1){
		adj[i].clear();
		val[i]=0;
		vis[i]=0;
	}
	f(i,0,n-2){
		int u,v;cin>>u>>v;
		addj[u].pb(v);
		addj[v].pb(u);
	}
	val[1]=1;
	dfs(1);
	f(i,1,n)cout<<val[i]<<' ';
	cout<<'\n';

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}