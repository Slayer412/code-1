#include<iostream>
using namespace std;
#include<vector>
#define ll long long
#define endl '\n'
void solve()
{	ll dp[100010]={0};
	int n;cin>>n;
	vector < ll > ans(n);
	ll arr[n+2],as=0;
	arr[0]=0;
	for(int i=1;i<=n;i++){
	cin>>arr[i];
	dp[i]=dp[i-1]+arr[i];
	}
	for(int i=1;i<=n;i++)
	{	as=0;
		for(int j=1;j<=n;j++)
		{	if(i==j)
			continue;
			if(i>j)
			{
				if(arr[j]>=dp[i-1]-dp[j])
				++as;
			}
			else
			{
				if(arr[j]>=dp[j-1]-dp[i])
				++as;
			}
		}
		ans[i]=as;
	}
		
	for(int i=1;i<=n;++i )
	cout<<ans[i]<<" ";
	cout<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

