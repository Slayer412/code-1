#include<iostream>
using namespace std;
#define ll long long

void solve()
{
	int n,r;cin>>n>>r;
	int arr[n];
	int ans=1;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int max=arr[0];
	for(int i=1;i<n;i++)
	{	
		if(arr[i]>max)
		{	max=arr[i];
			++ans;
		}
	}
	cout<<ans*r;
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

