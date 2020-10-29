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
	ll n,m,q;cin>>n>>m>>q;
	while(q--){
		ll sx,sy,ex,ey;
		cin>>sx>>sy>>ex>>ey;
		cout<<n/2LL<<'\n';
		cout<<(sy<=(n/2))<<" "<<(ey<=m/2)<<'\n';
		if((sy<=(ll)n/2LL && ey<=(ll)m/2LL) || (sy>=(ll)n/2LL && ey>=(ll)m/2LL))
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}