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
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
const int N=5005;
using namespace std;
ll fact[N],invfact[N];
ll mod=1e9 + 7;
ll power(ll x,ll n){
	ll res=1LL;
	while(n>0){
		if(n%2)
			res=(res*x)%mod;
			
		x=(x*x)%mod;
		n>>=1;
	}
	return res;
}
void fill(){
	int p=mod;
	fact[0]=1;
	ll i;
	for(i=1;i<N;i++){
		fact[i]=i*fact[i-1]%p;
	}
	i--;
	invfact[i]=power(fact[i],p-2)%mod;
//	cout<<invfact[i]<<"\n";
	for(i--;i>=0;i--){
		invfact[i]=invfact[i+1]*(i+1)%p;
	}
}
ll nCr(ll n,ll r){
	if(r>n || n<=0 || r<=0)return 1;
	return fact[n]*invfact[r]%mod*invfact[n-r]%mod;
}

void solve()
{
	ll n;cin>>n;
	ll x,pos;cin>>x>>pos;
	ll l=0,r=n;
	ll LS=0,GR=0;
	
	while(l<r){
		int mid=(l+r)/2;
		if(pos>mid){
			++LS;
			l=mid+1;
		}
		else if(mid>pos){
			r=mid;
			++GR;
		}
		else
			l=mid+1;
	}
	if(LS>x-1 || GR > n-x){
		cout<<0<<'\n';
		return;
	}
	ll rest=n-LS-GR-1;
	ll ans=nCr(x-1,LS)*nCr(n-x,GR)%mod*fact[LS]%mod*fact[GR]%mod*fact[rest]%mod;
	cout<<ans<<'\n';

}
int main()
{	Fast;
	fill();
	//int t;cin>>t;
	//while(t--)
	solve();
}