#include<bits/stdc++.h>
#define ll long long
#define EPS 1e-9
using namespace std;
void solve()
{
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=(long double)log10(arr[i]);
	}
	for(int i=0;i<n;i++)
	{
	cout<<(int)(EPS+pow((long double)10.0,sum-log10(arr[i])))<<" ";
	}	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

