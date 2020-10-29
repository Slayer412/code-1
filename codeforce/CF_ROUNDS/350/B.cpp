#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n,k;cin>>n>>k;
	vll a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	for(ll i=1;i<=1e5+1;++i){
		if(k<=(i*(i+1LL))/2LL && k>((i-1)*(i))/2LL){
			ll inx=k-((i-1)*(i))/2;
			//cout<<inx<<'\n';
			cout<<a[inx-1];
			return;
		}
	}
	
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}