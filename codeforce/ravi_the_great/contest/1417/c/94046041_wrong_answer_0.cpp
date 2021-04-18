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
	map<int,vector<int> >freq;
	vi a(n+1);
	f(i,1,n){
		cin>>a[i];
		freq[a[i]].pb(i);
	}
	vi ans(n+1,-1);
	f(i,1,n){
		int mx=-1;
		int prev=-1;
		if(freq[i].empty())continue;
		for(auto it:freq[i]){
			if(prev==-1){
				prev=it;
				continue;
			}
			mx=max(it-prev,mx);
			prev=it;
		}
		mx=max(n-prev+1,max(mx,prev));
		if(mx<0)continue;
		for(int j=mx;j<=n;++j)
			if(ans[j]==-1)
			ans[j]=i;
	}
	f(i,1,n)cout<<ans[i]<<" ";
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}