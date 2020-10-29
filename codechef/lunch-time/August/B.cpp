#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	map<int,int> mp,freq;
	vi a(n);
	f(i,0,n-1){
		cin>>a[i];
		mp[a[i]]++;
	}
	for(auto it:mp){
		freq[it.S]++;
	}
	int mx=-1;
	int ans=0;
	for(auto it:freq){
		if(it.S>mx){
			ans=it.F;
			mx=it.S;
		}
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}