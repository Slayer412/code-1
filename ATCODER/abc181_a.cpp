// Problem: A - Heavy Rotation
// Contest: AtCoder - AtCoder Beginner Contest 181
// URL: https://atcoder.jp/contests/abc181/tasks/abc181_a
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
	int n;cin>>n;
	cout<<( (n & 1) ? "Black" : "White" );
}
int main()
{	Fast;
	// int t;cin>>t;
	// while(t--)
	solve();
}