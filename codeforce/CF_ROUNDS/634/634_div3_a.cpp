#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll n;
	cin>>n;
	ll ans=ceil((double)n/2)-1;
	if(ans>0)
	cout<<ans<<'\n';
	else
	cout<<0<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

