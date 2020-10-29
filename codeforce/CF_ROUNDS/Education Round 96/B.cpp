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
	int n,k;cin>>n>>k;
	vll a(n);
	f(i,0,n-1)cin>>a[i];
	sort(all(a));
	if(k==0){
		cout<<a[n-1]-a[0]<<'\n';
		return;
	}
	ll sum=a[n-1];
	fr(i,n-2,0){
		if(k && a[i]!=0){
			sum+=a[i];
			--k;
		}
		if(k==0){
			cout<<sum<<'\n';
			return;
		}
	}
	cout<<sum<<'\n';

}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}