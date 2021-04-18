// Problem: A. In-game Chat
// Contest: Codeforces - Codeforces Round #692 (Div. 2, based on Technocup 2021 Elimination Round 3)
// URL: https://codeforces.com/contest/1465/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
	string s;cin>>s;
	int cnt=0;
	fr(i,n-1,0){
		if(s[i]!=')')break;
		++cnt;
	}
	if(n-cnt >= cnt){
		cout<<"No\n";
	}
	else{
		cout<<"Yes\n";
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}