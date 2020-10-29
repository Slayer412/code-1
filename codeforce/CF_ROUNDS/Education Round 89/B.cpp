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
	ll n,x,m;cin>>n>>x>>m;
	pair<ll,ll> p;
	ll ans=0;
	p={(ll)-1,x};
	while(m--){
		ll l,r;
		cin>>l>>r;
		if(p.first==-1){
			if(l<=x && x<=r){
				p={l,r};
				ans=(r-l)+1;
			}
		}
		else{
			if(l>=p.F && r<=p.S)
			continue;
			else{
				if((l<=p.F && r>=p.F) || (l>=p.F && l<=p.S)){
					p={min(l,p.F),max(p.S,r)};
					ans=(p.S-p.F)+1;
				}
			}
		}
	}
	if(ans==0)++ans;
	cout<<ans<<'\n';
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}