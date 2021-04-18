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
	int f[n+1]={0};
	int last[n+1]={0};
	vi a(n+1);
	f(i,1,n){
		cin>>a[i];
		int x=a[i];
		f[x]=max(i-last[x],f[x]);
		last[x]=i;
	}
	vi ans(n+1,-1);
	f(x,1,n){
		f[x]=max(f[x],n-last[x]+1);
		for(int i=f[x];i<=n && ans[i]==-1;++i)
			ans[i]=x;
	}
	f(i,1,n)cout<<ans[i]<<' ';
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}