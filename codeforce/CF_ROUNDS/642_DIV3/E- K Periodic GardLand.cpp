#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;

void solve()
{	int n,k;
	string s;
	cin>>n>>k;
	cin>>s;
	vector<int>pref(n,0);
	vector<int>dp(n,0);
	for(int i=0;i<n;i++){
		if(i==0)pref[i] = (s[i] - '0');
		else
		pref[i] += pref[i-1] + (s[i]-'0');
	}
	for(int i=n-1;i>=0;--i){
		
		int xone= (s[i]-'0')^1;
		if(i+k-1>n-1){
			xone+=pref[n-1]-pref[i];
		}
		else
			xone+=pref[i+k-1]-pref[i];
		if(i+k<n){
			xone+=dp[i+k];
		}
		int xzero=pref[n-1]-pref[i]+ (s[i]-'0');
		dp[i]=min(xone,xzero);
	}
	int ans=INT_MAX;
	for(int i=0;i<n;++i){
		if(i)
		ans=min(ans,dp[i]+pref[i-1]);
		else
		ans=min(ans,dp[i]);
	}
	cout<<ans<<'\n';
	
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

