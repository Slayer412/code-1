#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int N=2*1e5+5;
ll par[N],siz[N];
set<ll> st[26];
ll dsu_parent(ll node){
	if(par[node]==node)return node;
	else
	return dsu_parent(par[node]);
}
void dsu_union(ll a,ll b){
	a=dsu_parent(a);
	b=dsu_parent(b);
	if(a==b)return;
	if(siz[b]>siz[a])swap(a,b);
	par[b]=a;
	siz[a]+=siz[b];
}
void solve()
{
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		par[i]=i;
		siz[i]=1;
	}
	for(int i=1;i<=n;i++){
		string s;cin>>s;
		for(char it:s)st[it-'a'].insert(i);
	}
	for(int i=0;i<26;i++){
		if(st[i].size()<2)continue;
		ll node=*st[i].begin();
		for(auto &ele:st[i])dsu_union(node,ele);
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(par[i]==i)
		++ans;
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}