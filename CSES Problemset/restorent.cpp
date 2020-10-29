#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define F first
#define S second
using namespace std;
void solve()
{
	int n;cin>>n;
	vector< pair<ll,ll> >time(n+1);
	f(i,1,n){
		ll a,b;cin>>a>>b;
		time[i]={a,b};
	}
	sort(time.begin(),time.end());
	set<int> exit;
	exit.insert(time[1].S);
	ll ans=0;
	for(int i=2;i<=n;i++){
		auto it=exit.begin();
		if(time[i].F>=*it)
		exit.erase(it),exit.insert(time[i].S);
		exit.insert(time[i].S);
		ans=max(ans,(ll)exit.size());
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}