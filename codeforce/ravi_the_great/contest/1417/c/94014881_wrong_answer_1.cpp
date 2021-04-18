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
	map<int,set<int> >freq;
	vi a(n+1);
	f(i,1,n){
		cin>>a[i];
		freq[a[i]].insert(i);
	}
	vi ans(n+1,-1);
	vector< pair<int,int> > p(n+1);
	f(i,1,n){
		int mx=-1,mini=INT_MAX;
		int prev=-1;
		if(freq[i].empty())continue;
		for(auto it:freq[i]){
			if(prev==-1){
				prev=it;
				continue;
			}
			mx=max(it-prev,mx);
			mini=min(it-prev,mini);
			prev=it;
		}
		auto it=freq[a[i]].end();
		--it;
		mx=max(n-*it+1,max(mx,*freq[i].begin()));
	//	cout<<i<<" "<<mx<<"\n";
	//	cout<<'\n';
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