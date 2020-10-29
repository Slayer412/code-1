#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vll a(n+1),dp(n+1);

	a[0]=0;
	for(int i=1;i<=n;i++)
	cin>>a[i],dp[i]=1;
	for(int i=1;i<=n;i++){
		for(int j=i*2;j<=n;j+=i){
			
			if(a[i]<a[j])
			dp[j]=max(dp[j],dp[i]+1);
			//cout<<i<<" "<<j<<" "<<dp[i]<<" "<<dp[j]<<'\n';
		}
	}
	
	ll ans=0;
	for(int i=1;i<=n;i++){
		ans=max(ans,dp[i]);
	}
	cout<<ans<<'\n';
}
int main()
{	//ios_base::sync_with_stdio(0),cin.tie(0);
	int t;cin>>t;
	while(t--)
	solve();
}

