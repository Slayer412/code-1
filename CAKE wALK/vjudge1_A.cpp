#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll n,k;cin>>n>>k;
	
	if((n%2 && k%2) || (n%2==0 && k%2==0))
	{
		if(k*k <= n)
		cout<<"YES\n";
		else 
		cout<<"NO\n";	
	}
	else
	cout<<"NO\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

