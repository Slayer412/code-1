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
	int n;cin>>n;
	int a[n][3];
	ll sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	}
	vector< vector<int> > dp(n+1,vector<int>(3));
	for(int i=1;i<=n;i++){
		dp[i][0]=max(dp[i][0],a[i-1][0]+dp[i-1][1]);
		dp[i][0]=max(dp[i][0],a[i-1][0]+dp[i-1][2]);

		dp[i][1]=max(dp[i][1],a[i-1][1]+dp[i-1][0]);
		dp[i][1]=max(dp[i][1],a[i-1][1]+dp[i-1][2]);

		dp[i][2]=max(dp[i][2],a[i-1][2]+dp[i-1][0]);
		dp[i][2]=max(dp[i][2],a[i-1][2]+dp[i-1][1]);
				
	}
	cout<<max(dp[n][0],max(dp[n][1],dp[n][2]));
}
int main()
{	Fast;
	int t=1;
	//cin>>t;
	while(t--)
	solve();
}