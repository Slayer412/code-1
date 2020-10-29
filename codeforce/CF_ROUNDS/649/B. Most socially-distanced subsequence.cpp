#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vi a(n+1);
	for(int i=1;i<=n;i++)cin>>a[i];
	vi ans;
	f(i,1,n+1){
		if(i==1 || i==n || ((a[i-1]<a[i])!=(a[i]<a[i+1])))
		ans.push_back(a[i]);
	}
	cout<<ans.size()<<'\n';
	f(i,0,ans.size()){
		cout<<ans[i]<<" ";
	}
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}