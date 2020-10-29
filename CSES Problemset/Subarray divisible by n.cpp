#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int N=2*1e5;
vll a(N);
void solve()
{
	int n;cin>>n;
	ll s=0;
	map<ll,int> mp;
	mp[0]++;
	ll ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s=(s+a[i]%n+n)%n;
	//	cout<<s<<' ';
		ans+=mp[s];
		mp[s]++;
	}
	cout<<ans;
}
int main()
{	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}