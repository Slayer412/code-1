#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define MOD 1000000007
using namespace std;
int dp[1000][1000];
void solve()
{	int rows,cols;cin>>rows>>cols;
	
	int matrix[rows][cols];
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>matrix[i][j];
		}
	}
	ll ans=0;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=cols;j++){
			if(matrix[i-1][j-1]==1){
				dp[i][j]=min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]))+1;
				cout<<dp[i][j]<<' ';
				ans+=dp[i][j];
			}
		}
		cout<<'\n';
	}
	ans=ans%MOD;
	cout<<ans<<'\n';
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

