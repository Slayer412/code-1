#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define pb push_back
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int N=2e5+5;
vector< int> g[N];
vll a(N),p(N),b(N);
int days=0;
vector<int> ans(N);
bool ok=1;
vector<int> VIS(N);
void bfs(int n,int s){
	vector<bool> vis(n+1);
	queue<int> q;
	q.push(s);
	vis[s]=1;
	b[s]-=min(a[s],b[s]);
	if(b[s]==0 && ans[s]==0){
		
		ans[s]=days;
	}
	else if(b[s]!=0)
	ans[s]=-1;

	while(!q.empty()){
		int nod=q.front();
		q.pop();
		if(VIS[nod])
			continue;
		for(auto it:g[nod]){
			
			if(vis[it])continue;
			vis[it]=1;
			b[it]-=min(b[it],a[s]);
			
			//cout<<"b["<< it<<"] "<<b[it]<<" "<<it<<" "<<ans[it]<<"\n";
			
			if(b[it]==0 && ans[it]==0)ans[it]=days;
			
		//	cout<<" "<< b[it]<<" "<<it<<" "<<ans[it]<<"\n";
		//	cout<<'\n';
			q.push(it);
		}
	}
	VIS[s]=1;
	days+=1;
}
void solve()
{	days=1;
	int n;cin>>n;
	for(int i=0;i<=n;i++)ans[i]=0;
	for(int i=0;i<=n;i++){
		g[i].clear();
	}
	f(i,1,n)VIS[i]=0;
	for(int i=1;i<n;i++){
		int u,v;cin>>u>>v;
		g[u].pb(v);
		g[v].pb(u);
	}
	f(i,1,n)cin>>p[i];
	f(i,1,n)cin>>a[i];
	f(i,1,n)cin>>b[i];

	for(int i=1;i<=n;i++){
		bfs(n,p[i]);
		VIS[p[i]]=1;
	}

	f(i,1,n)cout<<ans[i]<<' ';
	cout<<'\n';
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}