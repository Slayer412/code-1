#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n,k;cin>>n>>k;
	if(k==0){
		if(n%2)
		cout<<1<<'\n';
		else
			cout<<0<<'\n';
		return;
	}
	if(k>=n){
		cout<<k-n<<'\n';
	}
	else{
			ll ans=n-k;
			if(ans%2)
				cout<<1<<'\n';
			else
				cout<<0<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}