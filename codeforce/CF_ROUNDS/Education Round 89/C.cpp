#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	int total=n+m-2;
	vector< vector<int> > freq(n+m,vector<int>(2,0));
	f(i,0,n-1){
		f(j,0,m-1){
			int a;cin>>a;
			if( (i+j) == (total-i-j))
			continue;
			int r=min(i+j,total-i-j);
			freq[r][a]++;
		}
	}
	ll ans=0;
	for(vector<int> v:freq){
		ans+=min(v[0],v[1]);
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}