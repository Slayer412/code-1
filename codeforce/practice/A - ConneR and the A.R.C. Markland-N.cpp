#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,pos,close;cin>>n>>pos>>close;
	set<int> s;
	f(i,0,close-1){
		ll x;cin>>x;
		s.insert(x);
	}
	if(!s.count(pos)){
		cout<<0<<'\n';
		return;
	}
	ll ans=1e9+5;
	for(ll i=pos-1;i>=max(1,pos-1200);--i){
		//cout<<i<<' ';
		if(!s.count(i)){
			ans=min(ans,(ll)pos-i);
			break;
		}
	}
	for(ll i=pos;i<=min(n,n+1200);++i){
		//cout<<i<<' ';
		if(!s.count(i)){
			ans=min(ans,(ll)i-pos);
			break;
		}
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}