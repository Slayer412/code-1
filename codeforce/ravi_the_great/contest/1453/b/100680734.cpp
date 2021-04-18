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
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vll a(n);
	f(i,0,n-1){
		cin>>a[i];
	}
	ll ans=0;
	ll mx=max(abs(a[0]-a[1]),abs(a[n-1]-a[n-2]));
	f(i,1,n-2){
		ans+=abs(a[i]-a[i-1]);
		mx=max(mx,abs(a[i]-a[i+1])+abs(a[i-1]-a[i])-abs(a[i+1]-a[i-1]));
		
	}
	ans+=abs(a[n-1]-a[n-2]);
	ans-=mx;
	cout<<ans<<endl;
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}