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
	int n,k;cin>>n>>k;
	vi a(n);
	vi vis(105);
	
	f(i,0,n-1)cin>>a[i];
	int dp[1005];
	for(int i=1;i<1003;++i)
		dp[i]=1e9+2;
	dp[0]=0;
	for(int i=0;i<n;i++){
		int cnt[105]={0};
		for(int j=i;j<n;++j){
			cnt[a[j]]++;
			int gg=0;
			for(int k=1;k<=100;++k){
				if(cnt[k]>1)
					gg+=cnt[k];
			}
			dp[j+1]=min(dp[i]+gg+k,dp[j+1]);
		}
	}
	cout<<dp[n]<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}