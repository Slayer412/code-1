#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	ll mx=arr[0],ans=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]<mx)
			ans=max(ans,(ll)log2(mx-arr[i])+1);
		mx=max(mx,arr[i]);
	}
	cout<<ans<<'\n';
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

