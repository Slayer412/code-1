#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int maxn=2e5+7;
vector <int> v[maxn];
void solve()
{
	int n,k;cin>>n>>k;
	vll a(n),w(k);
	f(i,0,n-1)cin>>a[i];
	f(i,0,k-1)cin>>w[i];
	sort(a.begin(),a.end());
	sort(w.rbegin(),w.rend());
	ll ans=0;
	for(int i=0;i<=n;i++)v[i].clear();
	int pos=0;
	for(int i=0;i<n-k;i++){
		while(v[pos].size()+1==w[pos])pos++;
		v[pos].push_back(a[i]);
	}
	int ind=1;
	for(int i=0;i<k;++i){
		ans+=a[n-i-1];
		if(v[i].size())ans+=v[i][0];
		else
		ans+=a[n-ind],++ind;
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}