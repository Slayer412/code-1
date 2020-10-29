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
	int n,X;cin>>n>>X;
	vi a(n);
	f(i,0,n-1){
		cin>>a[i];
	}
	ll mod=1e9+7;
	vector< vector<int> > dp(n+1,vector<int > (X+1,0));
	f(i,0,n)dp[i][0]=1;

	f(i,1,n){
		f(x,1,X){
			if(x>=a[i-1])
			dp[i][x]=(dp[i-1][x]%mod+dp[i][x-a[i-1]]%mod)%mod;
			else
				dp[i][x]=dp[i-1][x];
		}
	}
	cout<<dp[n][X]%mod<<" ";
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}