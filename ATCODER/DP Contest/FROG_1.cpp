#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vi dp(n),a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	dp[0]=0;
	dp[1]=abs(a[0]-a[1]);
	for(int i=2;i<n;i++){
	dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
	}
	cout<<dp[n-1];
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}