	#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>

using namespace std;
void solve()
{
	ll n,k;
	cin>>n>>k;
	cout<<k+(k-1)/(n-1)<<'\n';
}
int main()	
{
	int t;cin>>t;
	while(t--)
	solve();
}

