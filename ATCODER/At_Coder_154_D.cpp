#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

void solve()
{
	int n,k;cin>>n>>k;
	vector < double > v(n);
	int arr[n];
	int dp[n]={0};
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(!i)
		dp[i]=arr[i];
		else
		dp[i]=dp[i-1]+arr[i];
	}
	ll mx=dp[k-1];
	int l=0,r=k-1;
	for(int i=0,j=k;j<n;++i,++j)
	{	//cout<<dp[j]<<" "<<dp[i]<<" "<<mx<<endl;
		if((dp[j]-dp[i])>mx)
		{
			mx=dp[j]-dp[i];
			l=i+1,r=j;
		}
	}
	//cout<<l<<" "<<r<<endl;
	double sum=0;
	for(int i=l;i<=r;i++)
	{
	sum+=double(arr[i]+1)/2;
	}
	printf("%.10f",sum);
	
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}

