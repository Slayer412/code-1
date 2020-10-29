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
	int  n;cin>>n;
	vll a(n),b(n);
	ll mina=INT_MAX,minb=INT_MAX;
	for(int i=0;i<n;i++)cin>>a[i],mina=min(mina,a[i]);
	for(int i=0;i<n;i++)cin>>b[i],minb=min(minb,b[i]);
	ll ans=0;
	for(int i=0;i<n;i++){
		ans+=max(a[i]-mina,b[i]-minb);
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}