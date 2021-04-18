// Problem: D - Stamp
// Contest: AtCoder - AtCoder Beginner Contest 185
// URL: https://atcoder.jp/contests/abc185/tasks/abc185_d
// Memory Limit: 1024 MB
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

ll gcd(ll a,ll b){
	if(a==0)return b;
	return gcd(b%a,a);
}
void solve()
{
	ll n,m;cin>>n>>m;
	if(m==0){
		cout<<1<<'\n';
		return;
	}
	vi a(m);

	f(i,0,m-1)cin>>a[i];
	
	if(n==m){
		cout<<0<<'\n';
		return;
	}
	vi diff;
	sort(all(a));
	if(a[0]!=1)
	diff.pb(a[0]-1);
	for(int i=1;i<m;i++){
		if(a[i]-a[i-1]-1 > 0)
		diff.pb(a[i]-a[i-1] -1);
	
	}
	
	if(a[m-1]!=n){
		
		diff.pb(n-a[m-1]);
	}
	int k=INT_MAX,ans=0;
	for(auto x:diff){
		k=min(k,x);
	}
	if(k==0){
		cout<<0<<'\n';
	}
	for(auto it:diff){
		if(it%k)ans+=(it/k)+1;
		else
		ans+=it/k;
	}
	//cerr<<ans<<'\n';
	cout<<ans<<endl;
	
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}