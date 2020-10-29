#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	ll x;cin>>x;
	map<ll,ll> cnt;
	ll ele;
	for(int i=0;i<n;i++){
		cin>>ele;
		ll rem=ele%x;
		if(rem)cnt[x-rem]++;
	}
	ll ans=0;
	for(auto itr:cnt){
			ans=max(ans,(ll)x*(itr.second-1)+(ll)itr.first);
	}
	if(ans)
	cout<<ans+1<<'\n';
	else
	cout<<0<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}