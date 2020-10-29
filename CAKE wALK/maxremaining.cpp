#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

void solve()
{
	int n;
	ll arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	if(arr[n-1]!=arr[n-2])
	cout<<arr[n-2];
	else
	{	i=n-2;
		while(arr[i]==arr[n-1] && i>=0)
		i--;
		if(i==-1)
		cout<<0;
		else
		cout<<arr[i+1];
	}
}
int main()
{
	solve();
}

