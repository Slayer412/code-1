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
map<ll,int> mp;
void solve()
{
	ll n;cin>>n;
	ll dup=n;
	if(mp[n]){
		cout<<mp[n]<<'\n';
		return;
	}
	ll ans=1;
	for( ll i=2;i<=sqrt(n);++i){
		int cnt=0;
		if(n%i==0){
			while(n%i==0){
				++cnt;
				n/=i;
			}
			ans*=(cnt+1);
		}
	}
	if(n>1)ans*=2;
	cout<<ans<<'\n';
	mp[dup]=ans;
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
	mp.clear();
}