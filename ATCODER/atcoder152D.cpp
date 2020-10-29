#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int first(int x)
{	
	string s=to_string(x);
	return s[0]-'0';
}
void solve()
{
	int n;cin>>n;
	int dp[10][10]={0};
	for(int i=1;i<=n;++i)
	{
		dp[first(i)][i%10]++;
	}
	ll ans=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{	
			//cout<<i<<" "<<j;
			//cout<<" DP -> "<<dp[i][j]<<" "<<dp[j][i]<<endl;
			ans+=dp[i][j]*dp[j][i];
		}
	}
	cout<<ans<<endl;
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

