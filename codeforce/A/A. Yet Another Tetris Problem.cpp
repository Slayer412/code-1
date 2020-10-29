#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;cin>>n;
	ll arr[n];
	int odd=0,evn=0;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2)
		++odd;
		else 
		++evn;
	}
	
	if(evn==0 || odd==0)
	cout<<"YES\n";
	else cout<<"NO\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

