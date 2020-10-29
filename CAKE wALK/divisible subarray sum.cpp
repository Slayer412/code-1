#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{	int n;cin>>n;
	ll arr[n],sum=0;
	map<int,int>pref;
	pref[0]=1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
		sum=sum%n;
		sum=(sum+n)%n;
		pref[sum]++;
	}	
	ll ans=0;
	for(auto i: pref)
	{
			ans+=((i.second)*(i.second-1))/2;
	}
	cout<<ans<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

