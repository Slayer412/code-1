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
const int N=1000000;
void fns(){
	int k=100;
	int cnt=0;
	int ans=0;
	for(ll i=1;i*i<=k;i++){
			if(k%i==0){
				if(i!=k/i){
					cnt+=2;
				}
				else
					++cnt;
			}
		}
		ans+=(cnt);
}
void solve()
{
	ll n;cin>>n;
	ll k=n;
	ll ans=0;
	for(int i=1;i<n;i++){
		k=n-i;
		ll cnt=0;
		ll temp=1;
		for(ll j=2;j*j<=k;++j){
			cnt=0;
			if(k%j==0){
				while(k%j==0)k/=j,++cnt;
			}
		//	cout<<i<<" "<<j<<" "<<cnt<<"\n"
			temp*=(cnt+1);
		}
		if(k>1)temp*=2;
		
		ans+=temp;
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}