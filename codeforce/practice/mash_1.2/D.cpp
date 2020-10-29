#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define MOD 1000000007
using namespace std;
const int N=1e3+5;
vector< ll > dp(1e5,0);
void c(){
	dp[1]=dp[0]=1;
	for(int i=2;i<=N;++i){
		for(int j=0;j<i;++j){
			dp[i]=dp[i]%MOD+((dp[j]%MOD)*(dp[i-1-j]%MOD))%MOD;
			dp[i]=dp[i]%MOD;
		}
	}
}

void solve()
{
	int n;cin>>n;
	if(n%2){
		ll ans=dp[n]%MOD;
		cout<<ans<<'\n';
	}
	else{
		ll ans=dp[n]%MOD;
		ans=ans-dp[n/2]+MOD;
		ans=ans%MOD;
		cout<<ans<<'\n';
	}
}
int main()
{	Fast;
	c();
	int t;cin>>t;
	while(t--)
	solve();
}