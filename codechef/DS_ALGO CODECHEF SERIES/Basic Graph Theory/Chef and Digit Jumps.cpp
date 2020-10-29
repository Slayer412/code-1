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
const int N=1e5+5;
vector<  int > adj[10];
void solve()
{
	string s;cin>>s;
	int n=s.size();
	for(int i=0;i<n;++i){
		adj[s[i]-'0'].pb(i);
	}

	queue< int > q;
	int vis[n+1]={0},dist[n]={0};
	q.push(0);
	dist[0]=0;
	vis[0]=1;
	while(!q.empty()){
		int p=q.front();
		q.pop();
		
		for(int it:adj[s[p]-'0']){
			if(dist[it]==0 && !vis[it]){
				vis[it]=1;
				
				dist[it]=dist[p]+1;
				q.push(it);
			}
		}
		adj[s[p]-'0'].clear();
		if(p+1 < n && !vis[p+1]){
			q.push(p+1);
			dist[p+1]=dist[p]+1;
			vis[p+1]=1;
		}
		if(p-1>=0 && !vis[p-1]){
			q.push(p-1);
			dist[p-1]=dist[p]+1;
			vis[p-1]=1;
		}
	}
//	f(i,0,n-1)cout<<dist[i]<<" ";
	cout<<dist[n-1]<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}