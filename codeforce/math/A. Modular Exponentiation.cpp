#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n,m;cin>>n>>m;	
	ll res=1;
	ll x=2;
	if(n>=27)
	cout<<m<<'\n';
	else{
		ll res=1LL;
		ll x=2;
		while(n){
			if(n%2)
			res*=x;
			x*=x;
			n=n>>1;
		}
		cout<<m%res<<'\n';
	}
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}