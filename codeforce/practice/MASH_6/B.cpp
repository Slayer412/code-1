#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	ll ans=0;
	vector<int> uniq(n);
	uniq[n-1]=1;
	map<int,int> vis;
	vis[a[n-1]]=1;
	for(int i=n-2;i>=0;i--){
		if(!vis[a[i]])
		uniq[i]=uniq[i+1]+1;
		else
		uniq[i]=uniq[i+1];
		vis[a[i]]=1;
	}
	vis.clear();
	f(i,0,n-2){
		if(!vis[a[i]]){
			ans+=uniq[i+1];
		}
		vis[a[i]]=1;
	}
	cout<<ans<<'\n';

}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}