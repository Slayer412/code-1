#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxk=1000001;
void solve()
{
	int k,n;
	cin>>k>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr.begin(),arr.end());
	ll sum=0;
	for(int i=n-1;i>0;--i)
	{
		sum+=arr[i]-(arr[i-1]);
		
	}
	cout<<sum;
}
int main()
{
//	int t;cin>>t;
//	while(t--)
	solve();
}

