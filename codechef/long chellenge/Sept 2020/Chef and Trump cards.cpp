#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
#define MOD 1000000007
ll fact[100004];
void fn(){
	fact[0]=1;
	for(ll i=1;i<=100000;++i){
		fact[i]=((fact[i-1]%MOD)*i%MOD)%MOD;
	}
}

ll power(ll x,ll n){
	ll res=1LL;
	while(n){
		if(n%2)
			res=((res%MOD)*(x%MOD))%MOD;
		x=(x%MOD)*(x%MOD);
		n>>=1LL;
	}
	return res;
}
void solve()
{
	ll n;cin>>n;
	vll a(n);
	map<ll,int> mp;
	f(i,0,n-1){
		cin>>a[i];
		mp[a[i]]++;	
	}
	vector< pair< ll,int > > freq(mp.size());
	int ind=0;
	int cnt=0;
	for(auto it:mp){
		freq[ind]={it.S,it.F};
		if(it.S%2==0){
			++cnt;
		}
		ind++;
	}
	if(cnt==mp.size()){
		ll ans=1;
		sort(freq.rbegin(),freq.rend());
		f(i,0,freq.size()-1){
			ans=ans*(fact[freq[i].F]/(fact[(freq[i].F)/2]));
		}
		ll final=power(2,n)-ans;
		cout<<final<<'\n';
	}
	else{
		ll ans=power(2,n)%MOD;
		ans=((ans%MOD)*2)%MOD;
		cout<<ans<<'\n';
	}
	
}
int main()
{	Fast;
	fn();
	int t;cin>>t;
	while(t--)
	solve();
}