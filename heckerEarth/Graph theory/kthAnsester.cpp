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
const int N=100005;
vector<int> parent(N);
vector<int> adj[N];
vector<int> vis(N);
vector<int> leval(N);
void dfs(int src){
	vis[src]=1;
	for(auto it:adj[src]){
		if(!vis[it]){
			parent[it]=src;
			leval[it]=leval[src]+1;
			dfs(it);
		}
	}
}
void solve()
{
	int n,q;cin>>n>>q;
	
	
	f(i,1,n-1){
		int u,v;cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	
	dfs(1);
	while(q--){
		int node,k;cin>>node>>k;
		int par;
		int f=1;
		if(leval[node]<k){
			cout<<-1<<'\n';
			continue;
		}
		while(k){
			if(node==1){
				f=0;
				break;
			}
			par=parent[node];
			node=par;
			--k;
		}
		if(f)
		cout<<node<<'\n';
		else
		cout<<-1<<'\n';
	}


}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}