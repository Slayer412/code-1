#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int mod=1e9+7;
void solve()
{
	ll n;cin>>n;
	ll res=1;
	ll x=2;
	
	while(n){
		if(n%2)
		res=(res % mod  *  x%mod ) % mod;
		x=(x % mod * x % mod)%mod;
		n>>=1;
	}
	cout<<res<<'\n';
			
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}