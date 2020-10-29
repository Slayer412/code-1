#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,cost;
	cin>>n>>cost;
	int arr[n],p[n];
	int min1=101,min2=101;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++)cin>>p[i];
	for(int i=0;i<n;i++)
	{
		if(p[i]==0)
		min1=min(arr[i],min1);
		else
		min2=min(min2,arr[i]);
	}
	if(cost+min1+min2<=100)
	cout<<"yes\n";	
	else
	cout<<"no\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}