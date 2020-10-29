#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
	ll ans=0;
	if(a<d)
	ans=max(ans,a*e +(min(d-a,min(c,b)))*f);
	if(min(b,c)<d){
		ans=max(ans,min(b,c)*f+ min(d-min(b,c),a)*e);
	}
	ans=max(ans,min(a,d)*e);
	ans=max(ans,min(b,min(c,d))*f);
	cout<<ans<<'\n';

}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}