#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int mxn=1e5+5;
vector< int > adj[mxn];
vector<int> color(mxn);
vector<int> vis(mxn);
void solve()
{
	int n,m;cin>>n>>m;
	int x,y;
	for(int i=0;i<m;i++){
		 cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	vector< pair<int,int> > a(n+1);
	for(int i=1;i<=n;i++){
		cin>>x;
		color[i]=x;
		a[i]={x,i};
	}
	sort(a.begin(),a.end());
	for(int i=1;i<=n;i++){
		int node=a[i].second;
		int cnt=0;
		for(auto it:adj[node]){
			if(color[it] <= color[node]){
				if(vis[color[it]]==0)
				++cnt;
				vis[color[it]]=1;
			}
		}
		if(cnt!=color[node]-1){
			cout<<-1<<'\n';
			return;
		}
		for(auto it:adj[node])
			vis[color[it]]=0;
	}
	for(int i=1;i<=n;i++)cout<<a[i].second<<' ';
	cout<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}