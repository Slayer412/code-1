#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	vector<ll> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	ll sum=0,mx=0;
	sort(v.rbegin(),v.rend());
	for(int i=0;i<n;i++)
	{
		sum+=v[i];
		mx=max(sum,mx);
	}
	if(mx && !(mx & (mx-1)))cout<<"Yes\n";
	else cout<<"No\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

