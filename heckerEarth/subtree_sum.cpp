#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
const int mxn=1e5+5;
int cnt[mxn][26];
vector< int >adj[mxn];
string s;
void dfs(int u,int parent){
	for(int i=0;i<26;i++)
	cnt[u][i]=0;
	cnt[u][s[u]-'a']++;
	for(auto child : adj[u])
	{
		if(child==parent)
		continue;
		else
		dfs(child,u);
		for(int i=0;i<26;i++)
		cnt[u][i]+=cnt[child][i];
	}
}
void solve()
{
	int n,q;
	cin>>n>>q;
	cin>>s;
	s="0"+s;
	int u,v;
	for(int i=0;i<n;i++){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,0);
	while(q--)
	{
		int num;
		char c;
		cin>>num>>c;
		cout<<cnt[num][c-'a']<<'\n';	
	}
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}