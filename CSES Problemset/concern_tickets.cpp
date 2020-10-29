#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,m;cin>>n>>m;
	multiset<ll,greater<int> > ps;
	while(n--){
		ll x;
		cin>>x;
		ps.insert(x);
	}
	while(m--){
		ll x;
		cin>>x;
		auto it=ps.lower_bound(x);
		if(it==ps.end()){
			cout<<-1<<'\n';
			continue;
		}
		cout<<*it<<'\n';
		ps.erase(it);
	}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}