#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int N=2*1e5+5;
vector<int> adj[N];
int P[N],g[N],S[N],h[N];
bool ans=true;
void dfs(int v,int par=-1){
	S[v]=P[v];
	ll sum=0;
	for(int to:adj[v]){
		if(to==par)
		continue;
		dfs(to,v);
		sum+=g[to];
		S[v]+=S[to];
	}
	if((S[v]+h[v])%2==0){}
	else
	ans=false;
	
	g[v]=(S[v]+h[v])/2;
	
	if(g[v]>=0 && g[v]<=S[v]){}
	else
	ans=false;
	
	if(sum<=g[v]){}
	else
	ans=false;
	
	
}
void solve()
{
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++)cin>>P[i];
	for(int i=0;i<n;i++)cin>>h[i];
	for(int i=1;i<n;i++){
		int u,v;cin>>u>>v;--u,--v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(0);
	if(ans)cout<<"YES\n";
	else
	cout<<"NO\n";
	ans=true;
	for (int i = 0; i < n; ++i) adj[i].clear();
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}