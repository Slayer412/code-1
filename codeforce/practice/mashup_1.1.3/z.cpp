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
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n,m;cin>>n>>m;
	vector < pair<ll,ll> > a;
	f(i,0,m-1){
		ll x,y;cin>>x>>y;
		a.pb({y,x});
	}
	sort(a.rbegin(),a.rend());
	ll ans=0;
	ll temp=n;
	f(i,0,n-1){
		if(temp>a[i].S){
			ans+=a[i].S*a[i].F;
		}
		else{
			ans+=temp*a[i].F;
			break;
		}
		temp-=a[i].S;
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(tU-)
	solve();
}