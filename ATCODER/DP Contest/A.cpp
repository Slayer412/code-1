#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int N=1e5+10;
int dp[N];
vi a(N);
int find(int i,int n){
	if(i==n-1)
	return dp[i]=0;
	if(dp[i]!=-1)
	return dp[i];
	return dp[i]=min(abs(a[i]-a[i+1])+find(i+1,n),find(min(i+2,n-1),n)+abs(a[i]-a[min(i+2,n-1)]));
}
void solve()
{
	int n;cin>>n;
	int ans=0;
	f(i,0,n-1)cin>>a[i];
//	cout<<"HII\n";
	cout<<find(0,n);
}
int main()
{	Fast;
	memset(dp,-1,sizeof(dp));
//	int t;
//	cin>>t;
//	while(t--)
	solve();
}
