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
	int n;cin>>n;
	vll a(n);
	ll ans1=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		ans1+=a[i];
	}
	sort(a.begin(),a.end());
	if(ans1>=2LL*a[n-1]){
		cout<<ans1<<'\n';
	}
	else{
	ll ans=a[n-1]*2LL;
	cout<<ans<<'\n';
	}
}
int main()
{	Fast;
//	int t;cin>>t;
	//while(t--)
	solve();
}