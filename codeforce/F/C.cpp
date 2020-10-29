#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n+1);
	f(i,1,n)cin>>a[i];
	vector< vector<int> > dp(n+1,vector<int> (2));
	dp[1][0]=dp[1][1]=a[1];
	if(n>1){
		dp[2][0]=dp[1][1];
		dp[2][1]=a[1]+a[2];
	}
	f(i,3,n){
		dp[i][0]=min(dp[i-1][1],dp[i-2][1]);
		dp[i][1]=min(dp[i-1][0]+a[i],dp[i-2][0]+a[i]+a[i-1]);
	}
	cout<<min(dp[n][0],dp[n][1])<<'\n';


}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}