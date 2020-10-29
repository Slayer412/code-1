#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	
	ll dp[n+1]={0};
	for(int i=1;i<=n;i++)
		dp[i]=i+dp[i-1];
	for(int i=1;i<=n;i++)
	dp[i]+=dp[i-1];
	int ans=dp[n-1];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
	for(int i=0;i<m;i++)
	{	int cnt=0,cnt2=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j][i]==1)
			cnt++;
		}
		if(cnt<n-1)
		--ans;
	}
	if(m>n)
	for(int i=0;i<n;i++)
	{	int cnt=0,cnt2=0;
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==1)
			cnt++;
		}
		if(cnt<n-1)
		--ans;
	}
	
	
	cout<<ans<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

