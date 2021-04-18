// Problem: D. Divide and Summarize
// Contest: Codeforces - Codeforces Round #689 (Div. 2, based on Zed Code Competition)
// URL: https://codeforces.com/contest/1461/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
const int N=1e5+5;
set< ll > all;
void func(vector<ll> v){
	if(!sz(v)){
		return;
	}
	int len=sz(v);
	ll sum=0;
	if(len==1){
		all.insert(v[0]);
		return;
	}
	ll mini=INT_MAX,mx=-1;
	f(i,0,len-1){
		sum+=v[i];
		mini=min(mini,v[i]);
		mx=max(mx,v[i]);
	}
	all.insert(sum);
	//cout<<sum<<endl;
	ll mid=(mini+mx)/2;
	vll l,r;
	for(auto it:v){
	//	cout<<it<<" ";
		if(it<=mid){
			l.pb(it);
		}
		else
			r.pb(it);
	}
	if(!sz(r))return;
	func(l);
	func(r);	
}
void solve()
{	int n,m;
	cin>>n>>m;
	
	vll a(n);
	f(i,0,n-1){
		cin>>a[i];
	}
	sort(all(a));
	all.clear();
	func(a);
	f(i,1,m){
		ll q;cin>>q;
		if(all.find(q)!=all.end()){
			cout<<"Yes\n";
		}
		else
		cout<<"No\n";
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}