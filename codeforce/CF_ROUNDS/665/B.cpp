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
	ll x0,x1,x2;cin>>x0>>x1>>x2;
	ll y0,y1,y2;cin>>y0>>y1>>y2;
	ll ans=0,temp;
	ans+=min(x2,y1)*2LL;
	temp=min(x2,y1);
	x2-=temp;
	y1-=temp;
	temp=min(x2,y2);
	x2-=temp;
	y2-=temp;
	temp=min(x0,y2);
	x0-=temp;
	y2-=temp;
	ans-=min(x1,y2)*2LL;
	cout<<ans<<'\n';


}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}