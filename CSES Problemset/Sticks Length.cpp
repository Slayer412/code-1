#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n;cin>>n;
	vll a(n);
	ll total=0;
	for(ll &x:a){
		cin>>x;
		total+=x;
	}
	total=total/n;
	sort(a.begin(),a.end());
	ll ans=0;
	ll size=a[n/2];
	f(i,0,n-1){
		ans+=abs(size-a[i]);
	}
	cout<<ans<<'\n';
}
int main()
{	Fast
	//int t;cin>>t;
	//while(t--)
	solve();
}