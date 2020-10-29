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
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n),b(n),c(n);
	f(i,0,n-1)cin>>a[i];
	f(i,0,n-1)cin>>b[i];
	f(i,0,n-1)cin>>c[i];
	vi ans(n);
	ans[0]=a[0];
	f(i,1,n-1){
		if(ans[i-1]!=a[i])
			ans[i]=a[i];
		else if(ans[i-1]!=b[i])
			ans[i]=b[i];
		else if(ans[i-1]!=c[i])
			ans[i]=c[i];
	}
	if(ans[n-1]==ans[0]){
		if(ans[n-2]!=a[n-1]&& a[n-1]!=ans[0])
			ans[n-1]=a[n-1];
		else if(ans[n-2]!=b[n-1]&& b[n-1]!=ans[0])
		ans[n-1]=b[n-1];
		else if(ans[n-2]!=c[n-1]&& c[n-1]!=ans[0])
		ans[n-1]=c[n-1];
	}
	f(i,0,n-1)cout<<ans[i]<<" ";
	cout<<'\n';

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}