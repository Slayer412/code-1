#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll a,b,n;cin>>a>>b>>n;
	if(a>n || b>n){
		cout<<0<<'\n';
		return;
	}
	if((a+b)>n){
		cout<<1<<'\n';
		return;
	}
	if(a>b)
	swap(a,b);
	
	int cnt=1;
	ll x=1,y=2;
	while(1){
		
		ll ans=x*a+y*b;
		++cnt;
		//cout<<ans<<'\n';
		if(ans>n){
			cout<<cnt<<'\n';
			return;
		}
		
		ll t=y;
		y=x+y;
		x=t;
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}