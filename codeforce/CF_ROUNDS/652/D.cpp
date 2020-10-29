#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int mod=1e9+7;
const int maxn=2*1e6+1;
vector<ll> dp(maxn);

void solve()
{
	int n;cin>>n;
	cout<<dp[n]%mod<<'\n';
}
int main()
{	Fast;
	dp[0]=dp[1]=dp[2]=0;
	f(i,3,maxn){
		dp[i]=((2LL*dp[i-2])%mod +dp[i-1]%mod + (i%3==0)*4)%mod; 
	}
	int t;cin>>t;
	while(t--)
	solve();
}