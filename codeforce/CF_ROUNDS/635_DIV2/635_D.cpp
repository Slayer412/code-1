#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ans=0;
ll sq(ll ele)
{
	return 1ll*ele*ele;
}
void find(vector<ll> &a,vector<ll> &b,vector<ll> &c)
{	
	for(ll x:a)
	{
		auto y=lower_bound(b.begin(),b.end(),x);
		auto z=upper_bound(c.begin(),c.end(),x);
		if(y==b.end() || z==c.begin()){
		continue;}
		z--;
		ans=min(ans,(sq(x-*y)+sq(x-*z)+sq(*y-*z)));
	}
}
void solve()
{
	int r,g,b;
	cin>>r>>g>>b;
	vector<ll>red(r);
	vector<ll>green(g);
	vector<ll>blue(b);
	for(int i=0;i<r;i++)
	cin>>red[i];
	for(int i=0;i<g;i++)
	cin>>green[i];
	for(int i=0;i<b;i++)
	cin>>blue[i];
	sort(red.begin(),red.end());
	sort(green.begin(),green.end());
	sort(blue.begin(),blue.end());
	ans=9e18;
	find(red,green,blue);
	find(red,blue,green);
	find(green,red,blue);
	find(green,blue,red);
	find(blue,red,green);
	find(blue,green,red);
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

