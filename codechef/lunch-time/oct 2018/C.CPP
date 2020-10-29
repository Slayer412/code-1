#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxn=1e6+1;
int f[1000001];
void solve()
{	
	int n;cin>>n;
	int arr[n];
	int mx=0;
	for(int i=0;i<n;i++)
	cin>>arr[i],++f[arr[i]],mx=max(arr[i],mx);
	int ans=0;
	for(int i=1;i<=mx;i++)
	{
		for(int j=1;j<=f[i];j++)
		{
			if(i <= f[j])
			++ans;
		}
	}
	for(int i=0;i<n;i++)
	f[arr[i]]=0;
	cout<<ans<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

