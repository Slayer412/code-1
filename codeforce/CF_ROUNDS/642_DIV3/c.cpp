#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
using namespace std;
void solve()
{
	ll n,sum=0;cin>>n;
	for(ll i=1;i<=(n/2);i++){
		sum+=(i*i)*8;
	}
	cout<<sum<<'\n';
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

