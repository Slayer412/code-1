#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const ll mod=1e9+7;
using namespace std;
ll fact(int n){
	ll f=1;
	for(ll i=n;i>=1;i--){
		f=((f%mod)*(i%mod) +mod )%mod;
	}
	return f;
}
ll power(int n){
	ll res=1;
	ll x=2;
	while(n){
		if(n%2)
		res=((res%mod)*(x%mod)+mod)%mod;
		x=(x%mod*x%mod+mod)%mod;
		n/=2;
	}
	return res%mod;
}
void solve()
{
	int n;cin>>n;
	ll f=fact(n);
	--n;
	ll ans=(f-power(n) +mod)%mod;
	
	cout<<ans<<'\n';
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}