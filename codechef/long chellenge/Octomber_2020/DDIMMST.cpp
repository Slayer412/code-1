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
ll prim(int s ,vector< vector<ll> > &weight){
	priority_queue< pair<ll,ll> > Q;
	ll cost=0;
	int n=weight.size();
	std::vector<int> vis(n+1);
	Q.push({0,s});

	while(!Q.empty()){
		pair<int,ll> p=Q.top();
		Q.pop();
		int child=p.S;
		ll dist=p.F;
		if(vis[child])continue;
		vis[child]=1;
		cost+=dist;
		for(int i=1;i<n;i++){
			int W=weight[child][i];
			if(!vis[i]){
				Q.push({W,i});
			}
		}
	}
	return cost;
}
void solve()
{   int n,d;
	cin>>n>>d;
	if(n<=10000){
    	vector< vector<ll> > weight(n+1,vector<ll> (n+1));
    	vector<int> edges[n+1];
    	f(i,1,n){
    		f(j,1,d){
    			int x;cin>>x;
    			edges[i].push_back(x);
    		}
    	}
    	for(int i=1;i<n;i++){
    		ll mx=-1;
    		f(j,i+1,n){
    			int dist=0;
    			f(k,0,d-1){
    				dist+=abs(edges[i][k]-edges[j][k]);
    			}
    			weight[i][j]=dist;
    			weight[j][i]=dist;
    		}
    	}
    	ll ans=prim(1,weight);
    	cout<<ans<<endl;
	}
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}
