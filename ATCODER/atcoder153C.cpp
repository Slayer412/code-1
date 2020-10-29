#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long

void solve()
{
	int n,k;cin>>n>>k;
	vector < int > arr(n);
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr.begin(),arr.end());
	if(n>k)
	{	ll sum=0;
		for(int i=0;i<n-k;i++)
		sum+=arr[i];
		cout<<sum<<endl;
	}
	else
	cout<<0;
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

