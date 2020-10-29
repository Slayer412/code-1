#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
const int mxn=1e3+5;

void solve()
{
	ll n,k,p;cin>>n>>k>>p;
	map<ll,int>mp;
	ll distance;
	for(int i=1;i<=n;i++){
		cin>>distance;
		mp[distance]=i;
	}
	map<ll,int> ::iterator itr;
	vector< set <int> > dp;
	for(itr=mp.begin();itr!=mp.end();++itr){
		map<ll,int> ::iterator i=itr;
		++i;
		if(i==mp.end())
			break;
		if(abs(i->first-itr->first)<=k){
			dp[i->second].insert(itr->second);
			dp[itr->second].insert(i->second);
		}
	}
	for(int i=1;i<=n;i++){
		for(auto itr: dp[i]){
			cout<<itr<<" ";
			cout<<'\n';
		}
	}
	/*while(p--){
		int a,b;cin>>a>>b;
		if(dp[a][b] || dp[b][a])
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}*/
}
int main()
{
	//int t;cin>>t;
	//while(t--)
	solve();
}