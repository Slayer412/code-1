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
{	int n;cin>>n;
	string s;cin>>s;
	map<ll,ll> mp;
	mp[0]=1;
	ll ans=0;
	ll sum=0;
	for(int i=1;i<=n;i++){
		sum+= (s[i-1]-'0');
		ans+=mp[sum-i];
		mp[sum-i]++;
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}