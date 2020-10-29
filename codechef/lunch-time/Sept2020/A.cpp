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
void solve()
{
	int n;cin>>n;
	int in[n+1]={0};
	std::vector<int> adj[n+1];
	f(i,1,n-1){
		int u,v;cin>>u>>v;
		adj[u].pb(v);
		in[v]++;
	}
	int cnt=0;
	f(i,1,n){
		if(in[i]==0)
			++cnt;
	}
	cout<<cnt-1<<'\n';


}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}