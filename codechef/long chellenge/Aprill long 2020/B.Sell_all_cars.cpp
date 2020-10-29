#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1000000007;
void solve()
{
	int n;cin>>n;
	vector<ll> v(n);
	for(int i=0;i<n;i++)
	cin>>v[i];
	sort(v.rbegin(),v.rend());
	int count=0;
	ll res=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]-count>0)
		res+=(v[i]-count);
		++count;
	}
	ll ans=res%MOD;
	cout<<ans<<"\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

