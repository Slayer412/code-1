#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	int arr[n];
	int ans=1,f=1;
	cin>>arr[0];
	for(int i=1;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i-1]<=arr[i] && f)
		++ans;
		else
		f=0;
	}
	cout<<ans<<"\n";
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

