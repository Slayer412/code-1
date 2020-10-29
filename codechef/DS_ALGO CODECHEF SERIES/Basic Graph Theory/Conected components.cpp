#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
const int N=1e5+5;
const int MOD=1e9+7;
vector < int > Adj[N];
vector< bool > vis(N,false);
void dfs(int x,int &cnt){
	vis[x]=true;
	cnt++;
	for(int child:Adj[x]){
		if(!vis[child])
		dfs(child,cnt);
	}
}
void solve()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	Adj[i].clear();
	for(int i=1;i<=n;i++)
	vis[i]=false;
	while(m--){
		int x,y;
		cin>>x>>y;
		Adj[x].push_back(y);
		Adj[y].push_back(x);		
	}
	int cc=0;
	ll Ways=1;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
		++cc;
		int cnt=0;
		dfs(i,cnt);
		//cout<<cnt<<'\n';
		Ways*=cnt%MOD;
		}
	}
	cout<<cc<<" "<<Ways<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

