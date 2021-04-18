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
	int n;cin>>n;
	vi a(n);	
	f(i,0,n-1)cin>>a[i];
	map<int,set<int> > mp;
	int ans=INT_MAX;
	f(i,0,n-1){
		int j=i;
		while(i+1<n && a[i]==a[i+1]){
			++i;
		}
		if(i==n-1)
		mp[a[i]].insert(i);
		else
		mp[a[i]].insert(j);
		
		// cout<<a[i]<<" "<<j<<endl;
	}
	if(mp.size()==1){
		cout<<0<<endl;
		return;
	}
	for(auto it:mp){
		
			int temp=it.S.size();
			if(*it.S.begin()==0)--temp;
			auto i=it.S.end();
			--i;
			if(*i==n-1)--temp;
			temp+=1;
			ans=min(ans,temp);
	}
	cout<<ans<<endl;
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}