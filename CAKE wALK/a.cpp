#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll a,b;cin>>a>>b;
	ll ans=1;
	auto it;
	for(int i=1;i<=min(a,b);++i)
	ans*=i;
	cout<<ans<<endl;
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

