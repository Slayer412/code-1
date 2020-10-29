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
	ll n,m,x,y;cin>>n>>m>>x>>y;
	vll a(n),b(m);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int i=0,j=0;
	vector< pair<int,int> > ans;
	while(i<n && j<m){
		if(b[j]<=a[i]+y && b[j]>=a[i]-x){
			ans.push_back({i+1,j+1});
			++i,++j;
		}
		else{
			if(a[i]+y<b[j])++i;
			if(a[i]-x > b[j])++j;
			
		}
	}
	cout<<ans.size()<<'\n';
	for(auto it:ans)cout<<it.F<<" "<<it.S<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}