#include<bits/stdc++.h>
#define ll long long
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
		ll n;cin>>n;
		ll ans=0;
		for(ll i=1;i<=n;i*=2){
			ans+=n/i;
		}
		cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}