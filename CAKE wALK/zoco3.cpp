#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	
	int n;cin>>n;
	ll k;cin>>k;
	int arr[n];
	int ans=0;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
			{
				if(abs(arr[i]-arr[j])>=k)
				ans++;
			}
	}
	cout<<ans;
	
}

