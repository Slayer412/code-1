#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	ll sum=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			sum+=(arr[i]^arr[j]);
		}
	}
	cout<<sum<<"\n";
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

