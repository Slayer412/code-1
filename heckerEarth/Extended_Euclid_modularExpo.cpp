
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll power(ll x,ll n,ll mod){
	ll res=1;
	while(n){
		if(n%2==1)
		res=(res*x)%mod;
		x=(x*x)%mod;
		n/=2;		
	}
	return res%mod;
}
ll modInverse(ll x,ll mod){
	return power(x,mod-2,mod);

}
void solve(){

	ll a,b,c,m;cin>>a>>b>>c>>m;
	ll x=power(a,b,m);
	ll ans=modInverse(x,m);
	cout<<ans<<'\n';
}
int main(){
	//int t;cin>>t;
	//while(t--)
	solve();
	return 0;
}