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
#define mod 1000000007
using namespace std;

void solve()
{
	int n,m;cin>>n;
	m=n;
	std::vector< std::vector<int > > a(n,std::vector<int>(m));
	f(i,0,n-1){
		f(j,0,m-1){
			char c;cin>>c;
			if(c=='.')a[i][j]=0;
			else
				a[i][j]=1;
		}
	}
	std::vector< vector<ll> > dp(n,std::vector<ll> (m,0));
	if(a[0][0]==0)dp[0][0]=1LL;
	f(i,1,n-1){
		if(!a[i][0])dp[i][0]=dp[i-1][0];
	}
	f(i,1,m-1){
		if(!a[0][i])dp[0][i]=dp[0][i-1];
		
	}
	f(i,1,n-1){
		f(j,1,m-1){
			if(!a[i][j]){
				dp[i][j]=(dp[i-1][j]%mod+dp[i][j-1]%mod)%mod;
			}
		}
	}
	cout<<dp[n-1][m-1];
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}