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
	ll l,r,m;cin>>l>>r>>m;
	ll x=1;
	if(l+r < m){
		while(!((x*l+r -m)>=l && (x*l+r-m)<=r))++x;
		cout<<l<<" "<<r<<" "<<(x*l+r-m)<<'\n';
	}
	else{
		if(l%m==0 && m>l){
			cout<<l<<" "<<r<<" "<<r<<'\n';
		}
		else if(r%m==0&& m>r){
			cout<<r<<" "<<l<<" "<<l<<'\n';
		}
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}