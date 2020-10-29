#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;cin>>n;
	ll arr[n];
	ll sum=0;
	for(int i=0;i<n;i++)
	cin>>arr[i],sum+=arr[i];
	ll ans=0;
	//cout<<sum<<endl;
	for(int i=0;i<n;++i)
	{
		ans+=abs((sum-arr[i])-((n-(i+1))*arr[i]));
		sum-=arr[i];
		
	}
	cout<<ans<<endl;
}

