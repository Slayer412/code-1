#include<bits/stdc++.h>
using namespace std;
#define ll long long
long int M=1000000007;
void solve()
{
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	ll ans=1;
	int i=n-2;
	int x=0;
	ans=pow(2,__builtin_popcount(arr[n-1]));;
	while(arr[n-1]==arr[i])
	{
	ans=((ans%M)*(pow(2,__builtin_popcount(arr[i]))));
	--i;
	}
	cout<<ans%M<<endl;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

