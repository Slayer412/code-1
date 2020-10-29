#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define MOD 1000000009
using namespace std;

const int mxn=1e6+1;
vector<int> dp(mxn);

ll find(int n){

	if(dp[n]!=0)
	return dp[n];
	
	if(n>3)
		dp[n]=(find(n-2)+find(n-3));
	
	return dp[n];

	
}
void solve()
{
	int n;cin>>n;
	cout<<dp[n]<<'\n';
}
int main()
{	dp[0]=1;dp[1]=0;dp[2]=1;dp[3]=1;
	find(mxn);
	int t;cin>>t;
	while(t--)
	solve();
}

