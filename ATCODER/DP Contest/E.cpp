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
#define infinity 1000000000000
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n,W;cin>>n>>W;
	vll val(n),w(n);
	f(i,0,n-1)cin>>w[i]>>val[i];
	vector< vector <ll> > dp(105,vector< ll > (100005,infinity));
	dp[0][0]=0;
	dp[0][val[0]]=w[0];
	for(int i=1;i<n;i++){
		dp[i][0]=0;
		for(int j=1;j<=100000;++j){
			dp[i][j]=dp[i-1][j];
			if(j>=val[i])
				dp[i][j]=min(dp[i-1][j],w[i]+dp[i-1][j-val[i]]);
		}
	}
	ll ans=0;
	for(int j=100000;j>=0;--j){
		if(dp[n-1][j]<=W){
			ans=j;
			break;
		}
	}
	cout<<ans<<'\n';

}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}