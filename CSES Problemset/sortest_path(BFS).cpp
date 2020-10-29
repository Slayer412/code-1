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
std::vector<int> adj[N];
int n,m;
vector<int>  bfs(int s){
	std::vector<int> par(n+4),path;
	vector<int> vis(n+5);
	queue<int> q;
	q.push(s);
	par[s]=0;
	vis[s]=1;
	int dist[n+1]={0};
	while(!q.empty()){
		int p=q.front();
		q.pop();
		if(p==n){
				
				path.pb(n);
				while(par[n]!=0){
					path.pb(par[n]);
					n=par[n];
				}
				return path;
		}
		for(auto it:adj[p]){
			if(!vis[it]){
				par[it]=p;
				dist[it]=dist[p]+1;
				q.push(it);				
				vis[it]=1;
			}
		}
	}
	return path;

}
void solve()
{
	cin>>n>>m;
	f(i,1,m){
		int u,v;cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	vector<int> path=bfs(1);
	int l=path.size()-1;
	if(l<0)cout<<"IMPOSSIBLE"<<'\n';
	else{
		cout<<l+1<<'\n';
		fr(i,l,0)cout<<path[i]<<" ";
	}
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}