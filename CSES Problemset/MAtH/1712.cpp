// Problem: Exponentiation II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1712
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
ll pow(ll a,ll b, ll m){
	ll res=1LL;
	while(b){
		if(b%2)res=((res%m)*a%m)%m;
		a=(a%m*a%m)%m;
		b/=2;
	}
	return res;
}
void solve()
{
	ll a,b,c;
	cin>>a>>b>>c;
	ll ans=pow(a,pow(b,c,mod-1),mod);
	cout<<ans<<"\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}