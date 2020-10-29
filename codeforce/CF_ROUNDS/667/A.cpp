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
	ll a,b;cin>>a>>b;
	if(a==b){
		cout<<0<<'\n';
		return;
	}
	ll cnt=0;
	if(a>b){
		for(ll i=10;i>=1;i--){
			ll k=(a-b)/i;
			cnt+=k;
			a-=(k*(ll)i);
		}
	}
	else{
		for(ll i=10;i>=1;i--){
			ll k=(b-a)/i;
			cnt+=k;
			a+=(k*(ll)i);
		}
	}
	cout<<cnt<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}