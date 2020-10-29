#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int N=1e6+5;
const ll mod=1e9+7;
ll dp[N];
void solve()
{
	ll n;cin>>n;
	dp[0]=dp[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=1;j<=6;j++){
			if(i-j>=0)
			dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
		}
	}
	cout<<dp[n]%mod;
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}