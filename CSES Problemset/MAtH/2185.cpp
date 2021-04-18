// Problem: Prime Multiples
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2185
// Memory Limit: 512 MB
// Time Limit: 1000 ms

//code by: Ravi Khatri 
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
#define mod 1000000007

void solve()
{
	ll n,k;cin>>n>>k;
	vll a(k);
	f(i,0,k-1)cin>>a[i];
	
	cout<<ans<<"\n";
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}