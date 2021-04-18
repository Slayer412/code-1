// Problem: A - Brick
// Contest: AtCoder - Panasonic Programming Contest (AtCoder Beginner Contest 186)
// URL: https://atcoder.jp/contests/abc186/tasks/abc186_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

// Problem: F - Rook on Grid
// Contest: AtCoder - Panasonic Programming Contest (AtCoder Beginner Contest 186)
// URL: https://atcoder.jp/contests/abc186/tasks/abc186_f
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


void solve()
{
	int n,m;cin>>n>>m;
	int mn=INT_MAX;
	int a[n][m];
	f(i,0,n-1){
		f(j,0,m-1){
			cin>>a[i][j];
			mn=min(mn,a[i][j]);
		}
	}
	ll ans=0;
	f(i,0,n-1){
		f(j,0,m-1){
			ans+=(a[i][j]-mn);
		}
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}