#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
const int mod=1e9+7;
using namespace std;
void solve()
{
	int n;cin>>n;
	vi  b(n);	
	int x=0;
	for(int i=0;i<n;i++)cin>>b[i];
	for(int i=0;i<n;i++)
	{
		if((b[i] & b[i+1])!=b[i])
		{
			cout<<"0\n";
			return;
		}
	}
	ll ans=1;
	for(int i=0;i<n-1;i++)
	{
		x+=__builtin_popcount(b[i]);
	}
	for(int i=0;i<x;i++)
	ans=(ans*2)%mod;
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

