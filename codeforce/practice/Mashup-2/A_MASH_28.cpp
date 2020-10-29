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
	ll n,p,k;cin>>n>>p>>k;
	vll a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a.begin(),a.end());
	int ans=n;
	if(p<a[0]){
		cout<<0<<'\n';
		return;
	}
	for(int i=0;i<n;i++){
		if(i-k>=0)
		a[i]+=a[i-k];
		if(a[i]>p){
			ans=i;
			break;
		}
	}
	cout<<ans<<'\n';
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}