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
bool ok=false;
void solve()
{
	int n,q;cin>>n>>q;
	vector< vector<int> > adj(n+1);
	vector< int> parent(n+1);
	parent[1]=0;
	f(i,1,n-1){
		int u,v;
		cin>>u>>v;
		adj[u].pb(v);
		parent[v]=u;

	}
	int leval[n+1];
	queue<int> pq;
	pq.push(1);
	int vis[n+1]={0};
	vis[1]=1;
	leval[1]=0;
	while(!pq.empty()){
		int parent=pq.front();
		pq.pop();
		for(auto it:adj[parent]){
			if(!vis[it]){
				leval[it]=leval[parent]+1;
				pq.push(it);
				vis[it]=1;
			}
		}
	}
	while(q--){
		int u,k;cin>>u>>k;
		if(k==0){
			cout<<u<<'\n';
			
		}
		if(leval[u]>=k){
			
			if(leval[u]==k){
				cout<<1<<'\n';
				continue;
			}
			else{
				int par=u;
				int f=1;
				while(k--){
					par=parent[u];
					u=par;
					if(u==0){
						cout<<-1<<'\n';
						f=0;
						break;
					}
				}

				cout<<par<<'\n';
			}
			
		}
		else
			cout<<-1<<'\n';
	}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}