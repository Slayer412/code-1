#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	
	int n;cin>>n;
	ll k;cin>>k;
	vector< ll >arr(n;
	int ans=0;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr.rbegin(),arr.rend());
	for(int i=0;i< n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(abs(arr[i]-arr[j])>=k)
			{
				ans+=n-j;
				break;
			}
		}
	}
	cout<<ans;
	
}

