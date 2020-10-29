#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll a,b,k;cin>>a>>b>>k;
	if(a>=k)
	cout<<a-k<<" "<<b<<endl;
	else{
		ll x=max(0LL,b-(k-a));cout<<0<<" "<<x<<endl;
	}
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

