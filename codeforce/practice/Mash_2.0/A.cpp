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
	vector<int> a(n);
	f(i,0,n-1)cin>>a[i];
	sort(a.begin(),a.end());
	ll ans=0;
	for(int i=0;i<n-1;i+=2){
		if(a[i]!=a[i+1]){
			ans+=abs(a[i]-a[i+1]);
		}
	}
	cout<<ans;
}
int main()
{	Fast;
//	int t;cin>>t;
//	while(t--)
	solve();
}