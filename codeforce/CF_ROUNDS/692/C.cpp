// Problem: C. Peaceful Rooks
// Contest: Codeforces - Codeforces Round #692 (Div. 2, based on Technocup 2021 Elimination Round 3)
// URL: https://codeforces.com/contest/1465/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

//code by: Ravi Khatri @ravi_the_great
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
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int N=100005;
vector<int> vis(N);
vector<int>G[N]; 
int cc=0;
void dfs(int src,int par=-1){
	vis[src]=1;
	for(auto it:G[src]){
		if(!vis[it]){
			dfs(it,src);
		}
		else if(vis[it]==1){
			++cc;
		}
	}
}
void solve()
{
	int n,m;cin>>n>>m;
	int ans=0;
	cc=0;
	f(i,0,n){
		G[i].clear();
		vis[i]=0;
	}
	f(i,0,m-1){
		int x,y;cin>>x>>y;
		if(x!=y){
			++ans;
			G[x].pb(y);
		}
	}
	f(i,1,n){
		if(!vis[i]){
			dfs(i);
		}
		vis[i]=2;
	}
	ans+=cc;
	cout<<ans<<'\n';
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}