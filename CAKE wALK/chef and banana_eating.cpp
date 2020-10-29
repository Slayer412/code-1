#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long
ll arr[1000005],H;
int n;
bool is_less(ll x)
{
	ll ans=0;
	for(int i=1;i<=n;i++)
	ans+=(arr[i]+x-1)/x;  //ceil(arr/x)
	
	return (ans<=H);
}
void solve()
{
	int i;
	cin>>n>>H;
	ll end=0,start=0,ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		end+=arr[i];
	}
	while(start<=end)
	{
		ll mid=(start+end)/2;
		if(is_less(mid))
		{
			ans=mid;
			end=mid-1;
		}
		else
		start=mid+1;	
	}
	cout<<ans<<endl;

}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

