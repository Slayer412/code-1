#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define M 1000000007
using namespace std;
map<int,int> mp;
ll power(ll x,ll n,ll mod){
	ll res=1LL;
	while(n){
		if(n&1)res=(res*x)%mod;
		x=(x*x)%mod;
		n=n>>1;
	}
	return res%mod;	
}
ll modInv(ll x){
	return power(x,M-2,M);
}
void solve()
{
	int n,m;cin>>n>>m;
	map<int,int> trains;
	f(i,0,n-1){
		int x;cin>>x;
		trains[x]++;
	}
	f(i,0,m-1){
		int x;cin>>x;
		trains[x]++;
	}
	int cnt=0;
	for(auto it:trains){
		if(it.S>=2){
			++cnt;	
		}
	}
	cout<<cnt<<endl;
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}