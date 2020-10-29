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

int flag=0;
void dfs(int src,int par,vector<int> &ans,vector<int> &vis){
	if(vis[src]==2){
		ans.pb(src);
		flag=1;
		return;
	}
	if(vis[src]==0)
	ans.pb(src);
	vis[src]=1;

	for(auto it:adj[src]){
		if(it==par)continue;
		if(vis[it]<2){
			vis[it]++;
			if(vis[it]==1)
			ans.pb(it);
			dfs(it,src,ans,vis);
			if(flag){
				return;
			}
		}

	}
}
void solve()
{
	int n,m;cin>>n>>m;
	f(i,1,m){
		int u,v;cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	
	f(i,1,n){
		vector<int> ans,vis(n+1);
		dfs(i,-1,ans,vis);
		if(flag){
			int siz=ans.size();
			
			int j=0;
			for(int i=0;i<siz;i++){
				if(ans[i]==ans[siz-1]){
					j=i;
					break;
				}
			}
			cout<<siz-j<<'\n';
			for(int i=j;i<siz;i++){
				cout<<ans[i]<<' ';
			}
			return;
		}
	}		
	if(!flag)
		cout<<"IMPOSSIBLE\n";

}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}