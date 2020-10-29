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
{		int n;cin>>n;
		vll a(n);
		f(i,0,n-1)cin>>a[i];
		sort(a.begin(),a.end());
		ll ans=max(a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5],max(a[0]*a[1]*a[n-1]*a[n-2]*a[n-3],a[n-1]*a[0]*a[1]*a[2]*a[3]));
		cout<<ans<<'\n';

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}