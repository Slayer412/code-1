#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
#define infi 1000000007
const int N=50005;
set< pair<int,int> > adj[N];
int n;
void Dijsktra(ll s = 1, ll e = 1)
{   
	priority_queue< pair<int,int>,vector< pair<int,int> >,greater<pair<int,int> > > pq;
	std::vector<bool> vis(n+1,0);
	std::vector<int> dist(n+1,1e9);
	dist[1]=0;
	pq.push({0,s});
	while(!pq.empty()){
		int par=pq.top().S;
		pq.pop();
		if(vis[par])continue;
		vis[par]=1;
		for(auto it:adj[par]){
			int v=it.F;
			int w=it.S;
			if(dist[it.F] > w+dist[par]){
				dist[it.F]=w+dist[par];
				pq.push({dist[it.F],it.F});
			}
		}
	}
	cout<<dist[n]<<"\n";

}
void solve()
{	
	cin>>n;
	vi p(n+1);
	for(int i=1;i<=n;i++)adj[i].clear();
	f(i,1,n){
		cin>>p[i];
	}
	f(i,1,n){
		if(p[i]!=i)adj[i].insert({p[i],0});

		if(p[i]==i+1 && i+1<=n)
			adj[i].insert({i+1,0});
		else if(i+1<=n)
			adj[i].insert({i+1,1});

		if(p[i]==i-1 && i>1){
			adj[i].insert({i-1,0});
		}
		else if(i>1)
			adj[i].insert({i-1,1});
	}
	Dijsktra(1,n);
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}