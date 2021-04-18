// Problem: A. Strange Partition
// Contest: Codeforces - Codeforces Round #694 (Div. 2)
// URL: https://codeforces.com/contest/1471/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

//code by: Ravi Khatri @Ravi_Orz
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
ll n,m,l,r,x;
ll a[1000006];
ll b[1000006];
vi g[1000006];

void solve()
{
	int n,x;cin>>n>>x;
	vi a(n);
	ll mx=0;
	ll mn=0;
	f(i,0,n-1){
		int k;cin>>k;
		mx+=ceil((double)k/x);
		mn+=k;
	}
	mn=ceil((double)mn/x);
	cout<<mn<<" "<<mx<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}