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
	ll n,max_supply;cin>>n>>max_supply;
	vll a(n);
	set<int> s;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	
	sort(a.begin(),a.end());
	int inx=0,f=0;
	auto it=lower_bound(a.begin(),a.end(),max_supply);
	inx=it-a.begin();
	//cout<<inx<<'\n';
	int days=0;
	int ans=0;
	for(int i=inx;i<n;i++){
		if(max_supply<a[i]){
			while(max_supply<a[i]){
				days++;
				max_supply*=2LL;
			}
			++days;
		}
		else
		++days;
		max_supply=2LL*a[i];
	}
	ans=days+inx;
	days=0;
	if(inx!=0){
		--inx;
		for(int i=inx;i<n;i++){
				if(max_supply<a[i]){
					while(max_supply<a[i]){
						days++;
						max_supply*=2LL;
					}
					++days;
				}
				else
				++days;
			max_supply=2LL*a[i];
		}
		int res=min(days+inx,ans);
		cout<<res<<'\n';
	}
	else{
		cout<<ans<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}