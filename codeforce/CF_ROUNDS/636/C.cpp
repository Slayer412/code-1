#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	ll sum=0,mx=arr[0];
	for(int i=1;i<n;i++)
	{
		if(mx*arr[i]>0)
		{
			if(arr[i]>mx)
			mx=arr[i];
		}
		else
		{
			sum+=mx;
			mx=arr[i];
		}
	}
	cout<<sum+mx<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

