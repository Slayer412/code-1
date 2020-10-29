#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define MOD 1000000007
using namespace std;
ll power(ll n){
	ll res=1LL;
	ll x=2LL;
	while(n){
		if(n%2)
			res=(res%MOD*x%MOD)%MOD;
		x=(x%MOD*x%MOD)%MOD;
		n>>=1;
	}
	return res;
}
void solve()
{
	ll n,x;
	cin>>n>>x;
	ll res=(power(n)%MOD-1LL+MOD)%MOD;
	res=(res%MOD*x%MOD)%MOD;
	cout<<res<<"\n";
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}