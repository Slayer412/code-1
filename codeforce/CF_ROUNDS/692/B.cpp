// Problem: B. Fair Numbers
// Contest: Codeforces - Codeforces Round #692 (Div. 2, based on Technocup 2021 Elimination Round 3)
// URL: https://codeforces.com/contest/1465/problem/B
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
map<int,int> mp;
void solve()
{	
	int n,m;cin>>n>>m;
	int row[n+1]={0};
	int col[n+1]={0};
	vector < pair<int,int> > a;
	f(i,0,m-1){
		int x,y;cin>>x>>y;
		a.pb({x,y});
		row[x]++;
		col[y]++;
	}
	sort(all(a));
	ll ans=0;
	int curr=1;
	f(i,0,m-1){
		int x=a[i].F;
		int y=a[i].S;
		
	}
	cout<<ans<<'\n';
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}