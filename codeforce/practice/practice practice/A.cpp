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
	vll a(n);
	map<int,int> mp;
	vll dummy(n);
	f(i,0,n-1){
		cin>>a[i];
		dummy[i]=a[i];
		mp[a[i]]=i;
	}
	map< ll,pair<int,int> > ans;
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		ll mini=1e9+5;
		ll mx=(1e9+5)*-1;
		if(i==0){
			mini=a[i+1]-a[i];
			mx=a[n-1]-a[i];
			ans[a[i]]={mini,mx};
		}
		else if(i!=n-1) {
			mini=min(a[i+1]-a[i],a[i]-a[i-1]);
			mx=max(a[i]-a[0],a[n-1]-a[i]);
			ans[a[i]]={mini,mx};
		}
		else{
			mini=a[n-1]-a[n-2];
			mx=a[n-1]-a[0];
			ans[a[i]]={mini,mx};
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[dummy[i]].F<<" "<<ans[dummy[i]].S<<'\n'; 
	}
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}