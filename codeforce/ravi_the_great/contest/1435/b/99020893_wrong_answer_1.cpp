#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,m;cin>>n>>m;
	vector<vector<int> > rows;
	vector<vector<int> > cols;
	f(i,0,n-1){
		vi a(m);
		f(j,0,m-1){
			cin>>a[j];
		}
		rows.pb(a);
	}
	f(i,0,m-1){
		vi a(n);
		f(j,0,n-1){
			cin>>a[j];
		}
		cols.pb(a);
	}
	int ans[n][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;++j){
			ans[j][i]=cols[i][j];
		}
	}
	f(i,0,n-1){
		f(j,0,m-1)cout<<ans[i][j]<<" ";
		cout<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}