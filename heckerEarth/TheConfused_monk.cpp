#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
const ll MOD=1e9+7;
#define mod MOD
ll gcd(int a,int b){
	if(b==0)
	return a;
	return gcd(b,a%b);
}
ll power(ll x,ll n){
	ll res=1;
	while(n){
		if(n%2)
		res=((x%mod)*(res%mod))%mod;
		x=(x%mod*x%mod)%mod;
		n=n>>1;
	}
	return res%mod;
}
void solve()
{
	int n;cin>>n;
	vll a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ll Gcd=1;
	Gcd=gcd(a[0],a[1]);
	for(int i=2;i<n;i++){
		Gcd=gcd(Gcd,a[i]);
	}
	ll mul=1;
	for(int i=0;i<n;i++){
		mul=(mul*a[i])%mod;
	}
	cout<<power(mul,Gcd);
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}