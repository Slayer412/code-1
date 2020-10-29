#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	ll mx_x=-(1e9+5),mx_y=-(1e9+5),min_x=1e9+5,min_y=1e9+5;
	while(n--){
		ll x,y;cin>>x>>y;
		mx_x=max(x,mx_x);
		min_x=min(min_x,x);
		mx_y=max(y,mx_y);
		min_y=max(y,min_y);
	}
	ll x=mx_x-min_x;
	ll y=mx_y-min_y;
	ll ans=max(x,y);
	ans*=ans;
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}