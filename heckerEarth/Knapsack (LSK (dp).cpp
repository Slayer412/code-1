#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int dp[502][20002];
int K(vi &val,vi &wt,ll w,ll n){
	if(n==0 || w==0)
	return 0;
	if(dp[n][w]!=-1)
	return dp[n][w];
	if(wt[n-1]<=w){
		return dp[n][w]=max(val[n-1]+K(val,wt,w-wt[n-1],n-1),K(val,wt,w,n-1));
	}
	else
	return dp[n][w]=K(val,wt,w,n-1);
}
void solve()
{
	 int W,n;cin>>W>>n;
	vi val(n);
	vi wt(n);
	for(int i=0;i<n;i++){
		cin>>val[i]>>wt[i];
	}
	memset(dp,-1,sizeof(dp));
	int ans=K(val,wt,W,n);
	cout<<ans<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}