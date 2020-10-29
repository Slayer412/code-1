#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
const int mxn=2*1e5+5;
vector<int> adj[mxn];
vector<int> vis(mxn);
vector<int>arr;
int ans;
int findiff(){
	sort(arr.begin(),arr.end());
	int diff = INT_MAX;
	int n=arr.size(); 
	for(int i:arr)cout<<i<<' ';
	cout<<endl;
   for (int i=0; i<n-1; i++) 
      if (arr[i+1] - arr[i] < diff) 
          diff = arr[i+1] - arr[i];
  return diff;
}
void dfs(int a,int b,vi &val){
	vis[a]=1;
	arr.push_back(val[a]);
	cout<<val[a]<<" ";
	for(auto child:adj[a]){
		if(vis[child]==0){			
			
			if(child==b){
			arr.push_back(val[b]);
			cout<<val[b]<<' ';
			cout<<endl;
			ans=findiff();
			}
			else
			dfs(child,b,val);
		}
	}
}

void solve()
{	for(int i=0;i<1e5;i++)
	adj[i].clear();
	
	int n,q;
	cin>>n>>q;
	vi val(n+1);
	for(int i=1;i<=n;i++)
	cin>>val[i];
	int u,v;
	for(int i=1;i<n;i++){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	while(q--){
		int a,b;
		cin>>a>>b;
		dfs(a,b,val);
		cout<<ans<<'\n';
		vis.clear();
		arr.clear();
		
	}
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}