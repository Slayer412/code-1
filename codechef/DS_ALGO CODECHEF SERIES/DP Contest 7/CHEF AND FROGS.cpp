#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void dfs(int src,vector< vector<ll> > &adj,vector<ll> &graph_no,vector<bool> &vis,int curr){
	vis[src]=1;
	graph_no[src]=curr;
	for(auto i:adj[src]){
		if(!vis[i]){
			dfs(i,adj,graph_no,vis,curr);
		}
	}
}
void solve()
{
	ll n,k,p;cin>>n>>k>>p;
	vector< pair<ll,int> >a(n);
	vector<bool> vis(n,false);
	vector<ll> graph_no(n,-1);
	for(int i=0;i<n;i++){
		cin>>a[i].first;
		a[i].second=i;
	}
	sort(a.begin(),a.end());
	vector< vector<ll> >adj(n);
	for(int i=0;i<n-1;i++){
		if(a[i+1].first-a[i].first<=k){
			adj[a[i].second].push_back(a[i+1].second);
			adj[a[i+1].second].push_back(a[i].second);
		}
	}
	int curr=1;
	for(int i=0;i<n;i++){
		if(!vis[i]){
			dfs(i,adj,graph_no,vis,curr);
			++curr;
		}
	}
	while(p--){
		int a,b;
		cin>>a>>b;
		
		if(graph_no[a-1]==graph_no[b-1])
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}