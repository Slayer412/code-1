#include<bits/stdc++.h>
using namespace std;
#define ll long long
long int M=1000000007;
ll power(int n)
{
	ll res=1;
	ll ans=2;
	while(n)
	{
		if(n%2)
		res=((res%M)*ans%M)%M;
		
		n=n>>1;//y=y/2;
		
		ans=((ans%M)*(2))%M;
	}
	return res;
}
void solve()
{
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	ll ans=1;
	for(int i=0;i<n-1;i++)
	{
		if((arr[i]&arr[i+1])!=arr[i])
		{
			ans=0;break;
		}
		ans=power(__builtin_popcount(arr[i]));
	}
	cout<<ans<<endl;
}	
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

