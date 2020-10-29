#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	int n,m;cin>>n>>m;
	char c;
	cin>>c;
	bitset<16> bit(n);
	bitset<16> ans;
	int j=0;
	ll sum=0;
	if(c=='L')
	{
	for(int i=16-m;i<16;i++)
	ans[j++]=bit[i];
	for(int i=0;i<16-m;i++)
	ans[j++]=bit[i];
	
	for(int i=0;i<16;i++)
	{
		if(ans[i])
		sum+=(1<<i);
	}
	cout<<sum<<'\n';
	}
	else
	{	j=0;
		for(int i=m;i<16;i++)
			ans[j++]=bit[i];
		for(int i=0;i<m;i++)
		ans[j++]=bit[i];
		for(int i=0;i<16;i++)
		{
			if(ans[i])
			sum+=(1<<i);
		}
		cout<<sum<<'\n';
	}
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}