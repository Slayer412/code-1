// Problem: Circle of Chaos
// Contest: CodeChef - December Cook-Off 2020 Division 2
// URL: https://www.codechef.com/COOK125B/problems/CIRCHAOS
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
ll gcd(ll a,ll b){
	if(b==0)return a;
	return gcd(b,a%b);
}

void solve()
{
	ll n,m;cin>>n>>m;
	vll a(m);
	ll _gcd=1;
	f(i,0,m-1){
		cin>>a[i];
	}
	_gcd=a[0];
	f(i,1,m-1){
		_gcd=gcd(_gcd,a[i]);
	}
	ll ans=n;
	if(_gcd<=n){
	 	ans=n-_gcd;
		cout<<ans<<endl;
		return;
	}
	ll k=1;
	for(ll i=2;i*i<=_gcd;++i){
		if(_gcd%i==0){
			if(i<=n){
				k=i;
			}
			if((_gcd/i)<=n){
				k=_gcd/i;
			}
		}
	}
	cout<<ans-k<<'\n';
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}