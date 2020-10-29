#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n,m,x,y;cin>>n>>m>>x>>y;
	if(x<y){
		if(2*x<=y){
			ll ans=n*m*(x);
			cout<<ans<<'\n';
		}
		else{
			ll a=x,b=y-x;
			ll mul=ceil(double(n*m)/2);
			ll mul2=n*m-mul;
			ll ans=mul*(max(a,b))+mul2*(min(a,b));
			cout<<ans<<'\n';
		}
	}
	else if(x>=y){
		ll a=y-1,b=1;
		ll mul=ceil((double)(n*m)/2);
		ll mul2=n*m-mul;
		ll ans=a*mul+mul2;
		cout<<ans<<'\n';
	}
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}