#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define all(x) (x).begin(),(x).end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
ll dp[201][201][201];
void solve()
{	memset(dp,0,sizeof(dp));
	int r,g,b;cin>>r>>g>>b;
	vector<ll> R(r),G(g),B(b);
	f(i,0,r-1)cin>>R[i];
	f(i,0,g-1)cin>>G[i];
	f(i,0,b-1)cin>>B[i];
	sort(all(R),greater<ll>());
	sort(all(G),greater<ll>());
	sort(all(B),greater<ll>());
	for(int i=0;i<=r;i++){
		for(int j=0;j<=g;++j){
			for(int k=0;k<=b;++k){
				if(i>0)dp[i][j][k]=max(dp[i][j][k],dp[i-1][j][k]);
				if(j>0)dp[i][j][k]=max(dp[i][j][k],dp[i][j-1][k]);
				if(k>0)dp[i][j][k]=max(dp[i][j][k],dp[i][j][k-1]);
				if(i>=1 && j>=1)dp[i][j][k]=max((ll)dp[i][j][k],dp[i-1][j-1][k]+R[i-1]*G[j-1]);
				if(i>=1 && k>=1)dp[i][j][k]=max((ll)dp[i][j][k],dp[i-1][j][k-1]+R[i-1]*B[k-1]);
				if(j>=1 && k>=1)dp[i][j][k]=max((ll)dp[i][j][k],dp[i][j-1][k-1]+G[j-1]*B[k-1]);
				
				
			}
		}
	}
	cout<<dp[r][g][b]<<'\n';
	
	
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}