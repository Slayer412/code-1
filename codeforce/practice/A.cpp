#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{	int n,k;cin>>n>>k;
	vector<ll> arr(n);
	for(int i=0;i<n;i++)
	cin>>arr[i];
	ll sum=n+1;
	ll ans=0;
	map<pair<int,int>,int>mp;
	int mx=1;
	for(int i=0,j=n-1;i<j;j--,i++)
	{
		mp[{arr[i],arr[j]}]++;
		if(mp[{arr[i],arr[j]}]>=mx)
		sum=arr[i]+arr[j],mx=mp[{arr[i],arr[j]}];
	}
	for(int i=0,j=n-1;i<j;j--,i++)
	{
		if(arr[i]+arr[j]!=sum)
		ans++;
	}
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

