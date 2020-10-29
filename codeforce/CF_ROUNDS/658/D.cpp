#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int dp[4005][4005];
int fnc(vi &ans,int i,int n){
//	cout<<i<<" "<<n<<"\n";
	if(i==0)return n==0;
	if(n<0)return 0;
	if(dp[i][n]!=-1)
	return dp[i][n];
	return dp[i][n]= fnc(ans,i-1,n) | fnc(ans,i-1,n-ans[i-1]); 
}
void solve()
{	int n;cin>>n;
	vi a(2*n+5);
	vector<int> ans;
	for(int i=0;i<2*n;i++)
	cin>>a[i];
	for(int i=0;i<2*n;i++){
		int j=i;
		while(j<2*n && a[j]<=a[i])++j;
		ans.push_back(j-i);
		i=j-1;
	}
	for(int i=0;i<=4000;++i){
		for(int j=0;j<=n+1;++j)
		dp[i][j]=-1;
	}
//	for(auto it:ans)cout<<it<<' ';
	if(fnc(ans,ans.size(),n))cout<<"YES\n";
	else
	cout<<"NO\n";
}
int main()
{
	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}