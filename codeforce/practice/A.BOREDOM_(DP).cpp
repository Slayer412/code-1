#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	int x;
	map<int,int> cnt;
	vector< pair<int,int> > dp;
	vll ans(n);
	
	for(int i=0;i<n;i++)cin>>x,cnt[x]++;
	for(auto i:cnt){
		dp.push_back(make_pair(i.first,i.second));
	}
	for(int i=0;i<dp.size();i++){
		int j=i-1;
		if(j>=0 && dp[j].first+1==dp[i].first )j--;
		if(j==-1)ans[i]=1LL*dp[i].first*dp[i].second;
		else
		ans[i]=ans[j]+ 1LL*dp[i].first*dp[i].second;
		if(i!=0)
		ans[i]=max(ans[i],ans[i-1]);
	}
	n=dp.size()-1;
	cout<<ans[n]<<'\n';
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

