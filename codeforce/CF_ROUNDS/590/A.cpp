#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n;cin>>n;
	vi arr(n);
	ll sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	if(sum%n==0)
	cout<<sum/n<<'\n';
	else
	cout<<sum/n + 1<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}