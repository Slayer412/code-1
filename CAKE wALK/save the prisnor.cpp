#include<iostream>
using namespace std;
#define ll long long
void solve()
{
	ll n,m,k;
	cin>>n>>m>>k;
	m=m%n;
	ll ans=(m+k-1)% n;
	if(ans==0)
	ans=n;
	cout<<ans<<endl;
	
}
int main()
{
	int t;cin>>t;
	while(t--)
	solve();
}

