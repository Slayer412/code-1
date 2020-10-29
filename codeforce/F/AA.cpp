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
void solve()
{
	ll x,y,k;cin>>x>>y>>k;
	ll t=1;
	t=((k+k*y-1)/(x-1));
	if((k+k*y)>t*x-t+1)++t;
	ll ans=t+k;
	cout<<ans<<'\n';

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}