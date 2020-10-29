#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{	
	ll n;cin>>n;

	ll ans=n/2;
	if(n%2==0)--ans;
	cout<<max(ans,(ll)0)<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}