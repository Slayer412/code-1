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
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n);
	f(i,0,n-1)cin>>a[i],--a[i];
	sort(all(a));
	std::vector<std::vector<int> > dp(n+1,std::vector<int> (2*n,INT_MAX));
	dp[0][0]=0;
	f(i,0,n){
		f(j,0,2*n-1){
			if(dp[i][j]< INT_MAX){
				if(i<n){
					dp[i+1][j+1]=min(dp[i+1][j+1],dp[i][j]+abs(a[i]-j));
				}
				dp[i][j+1]=min(dp[i][j],dp[i][j+1]);
			}
		}
	}
	cout<<dp[n][2*n-1]<<endl;

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}