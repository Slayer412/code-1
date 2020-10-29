#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	map<int,int> mp;
	vector<int> s;
	f(i,1,2*n){
		ll x;cin>>x;
		if(mp[x]==0)
		s.push_back(x),mp[x]=1;
	}
	for(auto it:s)cout<<it<<" ";
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}