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
vector<int> par(N+5);
vector<int> adj[N];
int root(int a){	
	while(par[a]!=a){
		a=par[a];
	}
	return a;
}
void join(int a,int b){
	int root_a=root(a);
	int root_b=root(b);
	par[root_a]=root_b;
}
void intialise(){
	for(int i=0;i<=N;i++){
		par[i]=i;
	}
}
int check(int a,int b){
	return root(a)==root(b);
}
std::vector<int> vis(N);
void dfs(int src){
	vis[src]=1;
	for(auto it:adj[src]){
		if(!vis[it]){
			vis[it]=1;
			dfs(it);
		}
	}
}
void solve()
{
	intialise();
	int n,m;cin>>n>>m;
	while(m--){
		int a,b;cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	vector<int> nodes;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
			nodes.pb(i);
		}	
	}
	int len=nodes.size()-1;
	cout<<len<<'\n';
	for(int i=1;i<nodes.size();++i){
		cout<<nodes[0]<<" "<<nodes[i]<<'\n';
	}


}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}