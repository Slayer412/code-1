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
	ll sum;cin>>sum;
	vi coins(n);
	f(i,0,n-1)cin>>coins[i];
	int inf=1e9;
	vector< int  > dp(sum+1,inf);
	dp[0]=0;
	f(i,0,n-1){
		f(j,coins[i],sum){
			if(j%coins[i]==0)
				dp[j]=min(dp[j],j/coins[i]);
			else
				dp[j]=min(dp[j],dp[j-coins[i]]+1);
		}
	}
	if(dp[sum]==inf)cout<<-1;
	else
	cout<<dp[sum]<<' ';

}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}