#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define speed ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve()
{
	int n;cin>>n;
	vll a(n),b(n);
	for(int i=0;i<n;i++)
	cin>>a[i]>>b[i];
	ll mini=1e18,ans=0;
	int ii;
	for(int i=0;i<n;i++){
		
		ii=(i+1)%n;
		
		ll val=min(a[ii],b[i]);
		
		ans+=(a[ii]-val);
		
		mini=min(mini,val);
	}
	ans+=mini;
	
	cout<<ans<<'\n';
}
int main()
{	speed;
	int t;cin>>t;
	while(t--)
	solve();
}
