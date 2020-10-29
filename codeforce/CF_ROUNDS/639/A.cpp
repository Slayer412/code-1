#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	ll n,m;
	cin>>n>>m;
	if(n==1 || m==1 || (n==2 && m==2))
	cout<<"YES\n";
	else
	cout<<"NO\n";
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();	
}

