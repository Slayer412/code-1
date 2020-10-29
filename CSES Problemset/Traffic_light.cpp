#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int mxn=2e5;
map<ll,int> mp;
vector<int> a(mxn);
void solve()
{
	ll x,n;
	cin>>x>>n;
	set<ll> s;
	s.insert(0);
	s.insert(x);
	
	mp[x]=1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		auto itr=s.lower_bound(a[i]);
		ll r=*itr;
		--itr;
		ll l=*itr;
		--mp[r-l];
		if(!mp[r-l])mp.erase(r-l);
		s.insert(a[i]);
		
		++mp[r-a[i]];
		++mp[a[i]-l];
		cout<<(--mp.end())->first<<' ';
	}
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}