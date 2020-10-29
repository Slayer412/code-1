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
ll fn(ll P,ll CS,ll CW,ll S, ll W)
{
	if(S>W)return fn(P,CW,CS,W,S);
	if((S*CS>=P))return P/S;
	return CS+min((P-S*CS)/W,CW);
} 
void solve()
{
	ll P,F,CS,CW,S,W;
	cin>> P >> F >> CS >> CW >> S >> W;
	ll ans=0;
	for(int cs=0;cs<=CS;++cs){
		if(S*cs<=P){
			ll cw=min((P-cs*S)/W,CW);
			ans=max(ans,cs + cw + fn(F,CS-cs,CW-cw,S,W));
		}
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}