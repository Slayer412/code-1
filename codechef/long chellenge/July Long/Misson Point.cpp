#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n;cin>>n;
	map<ll,vector < pair<ll,ll> > >mpx;
	map<ll,vector <pair<ll,ll> > >  mpy; 
	for(int i=0;i<4*n-1;++i){
		ll x,y;
		cin>>x>>y;
		mpx[x].push_back({x,y});
		mpy[y].push_back({x,y});
	}
	ll x,y;
	for(auto it:mpx){
		if(it.second.size()%2){
			x=it.first;
			break;
		}
	}
	for(auto it:mpy){
		if(it.second.size()%2)
		y=it.first;
	}
	cout<<x<<" "<<y<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}