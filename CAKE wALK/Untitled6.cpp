#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++)
	cin>arr[i];
	sort(arr,arr+n);
	ll mini=arr[0];
	for(int i=0;i<n-1;i++)
	{	
		mini=min(arr[i]-arr[i-1],min);
	}
	cout<<mini<<endl;
}

