#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define MOD 1000000007
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
ll expo(ll x,ll n,ll mod){
	ll res=1LL;
	while(n){
		if(n%2){
			res=res*x%mod;
		}
		x=x*x%mod;
		n>>=1;
	}
	return res%mod;
}
void solve()
{
	ll a,b,c;cin>>a>>b>>c;
	cout<<expo(a,expo(b,c,MOD-1)%MOD,MOD)%MOD<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}