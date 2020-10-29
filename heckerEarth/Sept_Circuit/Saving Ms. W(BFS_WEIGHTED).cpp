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
const int N=1005;
vector< pair< int,ll > > adj[N];
vector< pair<ll,ll> > cost(N);
std::vector<int > vis(N);
std::vector< ll > dist(N);
int start,destination;
ll bsf(){
	ll stamina=0;
	ll sleep=0;
	queue<int> q;
	q.push(start);
	vis[start]=1;
	int ind=0;
	while(!q.empty()){
		int par=q.front();
		if(stamina==0)
			stamina+=cost[ind].F,sleep+=cost[ind].S,++ind;
		q.pop();
		for(auto it:adj[par]){
			if(!vis[it.F]){
				if(stamina>=it.S)
				dist[it.F]=dist[par]+it.S;
				else
					stamina+=cost[ind].F,sleep+=cost[ind].S,++ind;
				vis[it.F]=1;
				q.push(it.F);
		}
	}


}
void solve()
{
	int n,m;
	cin>>n>>m>>start>>destination;

	f(i,1,m){
		int u,v,w;cin>>u>>v>>w;
		adj[u].pb({v,w});
		adj[v].pb({u,w});
	}
	for(int i=0;i<n;i++){
		ll c,h;cin>>c>>h;
		cost.pb({c,h});
	}

}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}