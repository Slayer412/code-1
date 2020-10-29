#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll r,h;
	cin>>r>>h;
	int ans=h/r,rem=h-ans*r;
	ans=2*ans;
	if(rem>=(r/2.0))
	{	ans+=2;
		if(rem/sqrt(3)>(r/2.0))
		++ans;
	}
	else ++ans;
	cout<<ans<<'\n';
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

