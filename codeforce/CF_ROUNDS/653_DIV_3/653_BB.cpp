#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n;cin>>n;
	if(n==1){
		cout<<0<<'\n';
		return;
	}
	if(n%3==0){
		int cnt=0;
		while(n%3==0){
			n/=3;
			++cnt;
		}
		if(!(n && !(n & (n-1))))cout<<-1<<'\n';
		else{
			ll x=log2(n);
			if(x>cnt)cout<<-1<<'\n';
			else{
				cout<<x+(cnt-x)*2<<'\n';
			}
		}
	}
	else
	cout<<-1<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}