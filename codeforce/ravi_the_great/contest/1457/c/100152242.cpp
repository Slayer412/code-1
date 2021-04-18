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
#define sz(v) (int)v.size()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;


void solve()
{
		int n,p,k;cin>>n>>p>>k;
		string s;
		cin>>s;
		int x,y;cin>>x>>y;
		int ans=INT_MAX;
		
		vi dp(n+k+1,0);
		fr(i,n-1,n-k-1){
			dp[i]=dp[i+k]+1-(s[i]-'0');
		}
		for(int i=n-k-1;i>=0;--i){
			if(i+k<n){
				dp[i]=dp[i+k]+1-(s[i]-'0');
			}
		}
		for(int i=p-1;i<n;i++){
			int curr=0;
			
			curr=dp[i]*x+(i-p+1)*y;
			ans=min(curr,ans);	
		}
		cout<<ans<<endl;
		
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}